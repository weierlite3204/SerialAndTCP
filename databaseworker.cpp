// databaseworker.cpp - 数据库操作工作线程实现

#include "databaseworker.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMutex>
#include <QMutexLocker>
#include <QSqlQuery>
#include <QDateTime>
#include <QDebug>

DatabaseWorker::DatabaseWorker(QObject *parent) : QObject(parent)
{
    qDebug() << "[DatabaseWorker] 构造函数被调用";
    
    // 初始化数据库连接对象
    db = QSqlDatabase::addDatabase("QMYSQL");
    
    // 初始化属性映射表
    attributeMap["空气温度"] = "air_temp";
    attributeMap["空气相对湿度"] = "air_humidity";
    attributeMap["氧气浓度"] = "oxygen_content";
    attributeMap["土壤温度"] = "soil_temp";
    attributeMap["土壤含水量"] = "soil_humidity";
    attributeMap["光照强度"] = "light_intensity";
    
    qDebug() << "[DatabaseWorker] 属性映射表初始化完成";
}

DatabaseWorker::~DatabaseWorker()
{
    // 确保在对象销毁前断开数据库连接
    disconnectFromDatabase();
}

// connectToMysql - 连接到MySQL数据库的核心方法
// 返回值: 连接是否成功
bool DatabaseWorker::connectToMysql()
{
    QMutexLocker locker(&mutex);
    
    // 检查并清理现有连接
    if (QSqlDatabase::contains("mysqlConnection")) {
        db = QSqlDatabase::database("mysqlConnection");
        if (db.isOpen()) {
            emit connectionStatusChanged(true, "数据库连接已存在且可用");
            return true;
        }
        db = QSqlDatabase();
        QSqlDatabase::removeDatabase("mysqlConnection");
    }
    
    // 创建并配置新连接
    db = QSqlDatabase::addDatabase("QMYSQL", "mysqlConnection");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("test");
    db.setUserName("root");
    db.setPassword("123456");
    
    // 尝试打开连接
    if (!db.open()) {
        QString error = db.lastError().text();
        db = QSqlDatabase();
        if (QSqlDatabase::contains("mysqlConnection")) {
            QSqlDatabase::removeDatabase("mysqlConnection");
        }
        emit connectionStatusChanged(false, "连接失败: " + error);
        return false;
    }
    
    emit connectionStatusChanged(true, "数据库连接成功");
    return true;
}

//插入数据
void DatabaseWorker::storeGreenhouseData(double airTemp, double airHumidity, double oxygenContent, double soilTemp, double soilHumidity, double lightIntensity)
{
    qDebug() << "[DatabaseWorker] 开始存储温室环境数据";
    
    QMutexLocker locker(&mutex);
    if (!db.isOpen()) {
        qDebug() << "[DatabaseWorker] 数据库连接未打开，无法存储数据";
        // 可以考虑添加一个存储结果信号，与查询结果信号保持一致的错误处理风格
        return;
    }

    QSqlQuery query(db);
    // 使用参数化查询插入数据到已创建的表中
    QString insertQuery = "INSERT INTO greenhouse_data (collect_time, air_temp, air_humidity, oxygen_content, soil_temp, soil_humidity, light_intensity) VALUES (?, ?, ?, ?, ?, ?, ?);";
    query.prepare(insertQuery);
    
    // 添加当前时间（转换为字符串格式以避免时区问题）
    query.addBindValue(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));
    // 添加环境参数
    query.addBindValue(airTemp);
    query.addBindValue(airHumidity);
    query.addBindValue(oxygenContent);
    query.addBindValue(soilTemp);
    query.addBindValue(soilHumidity);
    query.addBindValue(lightIntensity);

    if (query.exec()) {
        qDebug() << "[DatabaseWorker] 数据存储成功";
    } else {
        qDebug() << "[DatabaseWorker] 数据存储失败: " << query.lastError().text();
    }
}

void DatabaseWorker::connectToDatabase()
{
    connectToMysql();
}

//关闭数据库连接
void DatabaseWorker::disconnectFromDatabase()
{
    QMutexLocker locker(&mutex);
    
    // 清理数据库连接
    db = QSqlDatabase();
    
    if (QSqlDatabase::contains("mysqlConnection")) {
        // 安全关闭连接
        {   
            QSqlDatabase localDb = QSqlDatabase::database("mysqlConnection");
            if (localDb.isOpen()) localDb.close();
        }
        
        QSqlDatabase::removeDatabase("mysqlConnection");
        emit connectionStatusChanged(false, "数据库已断开连接");
    }
}

// 检查数据库连接状态的辅助方法
bool DatabaseWorker::checkConnection()
{
    if (!db.isOpen()) {
        qDebug() << "[DatabaseWorker] 数据库连接未打开";
        emit queryResultsReady(false, QList<QVariantList>(), "数据库连接未打开");
        return false;
    }
    return true;
}

// 处理查询结果的辅助方法
QList<QVariantList> DatabaseWorker::processQueryResults(QSqlQuery &query, const QString &queryType)
{
    QList<QVariantList> results;
    int rowCount = 0;
    
    while (query.next()) {
        QVariantList row;
        row << query.value(0) << query.value(1) << query.value(2) << query.value(3) 
            << query.value(4) << query.value(5) << query.value(6) << query.value(7);
        results.append(row);
        rowCount++;
    }
    
    qDebug() << "[DatabaseWorker]" << queryType << "查询到" << rowCount << "条数据";
    return results;
}

//查询数据
void DatabaseWorker::queryAllGreenhouseData()
{
    qDebug() << "[DatabaseWorker] 开始查询数据";
    
    QMutexLocker locker(&mutex);
    if (!checkConnection()) {
        return;
    }
    
    QSqlQuery query(db);
    QString selectQuery = "SELECT entry_id, collect_time, air_temp, air_humidity, oxygen_content, soil_temp, soil_humidity, light_intensity FROM greenhouse_data ORDER BY collect_time DESC";
    
    if (!query.exec(selectQuery)) {
        qDebug() << "[DatabaseWorker] 查询失败: " << query.lastError().text();
        emit queryResultsReady(false, QList<QVariantList>(), "查询失败: " + query.lastError().text());
        return;
    }
    
    // 使用辅助方法处理查询结果
    QList<QVariantList> results = processQueryResults(query, "");
    emit queryResultsReady(true, results, QString("查询成功，共 %1 条数据").arg(results.size()));
}

// 按时间范围查询温室环境数据
void DatabaseWorker::queryGreenhouseDataByTimeRange(const QDateTime &startTime, const QDateTime &endTime)
{
    qDebug() << "[DatabaseWorker] 开始按时间范围查询数据";
    qDebug() << "[DatabaseWorker] 时间范围: " << startTime.toString("yyyy-MM-dd HH:mm:ss") 
             << " - " << endTime.toString("yyyy-MM-dd HH:mm:ss");
    
    QMutexLocker locker(&mutex);
    if (!checkConnection()) {
        return;
    }
    
    QSqlQuery query(db);
    // 使用参数化查询按时间范围查询数据
    QString selectQuery = "SELECT entry_id, collect_time, air_temp, air_humidity, oxygen_content, soil_temp, soil_humidity, light_intensity "
                         "FROM greenhouse_data "
                         "WHERE collect_time BETWEEN ? AND ? "
                         "ORDER BY collect_time DESC";
    
    query.prepare(selectQuery);
    // 绑定时间参数
    query.addBindValue(startTime);
    query.addBindValue(endTime);
    
    if (!query.exec()) {
        qDebug() << "[DatabaseWorker] 时间范围查询失败: " << query.lastError().text();
        emit queryResultsReady(false, QList<QVariantList>(), "查询失败: " + query.lastError().text());
        return;
    }
    
    // 使用辅助方法处理查询结果
    QList<QVariantList> results = processQueryResults(query, "时间范围");
    emit queryResultsReady(true, results, QString("查询成功，共 %1 条数据").arg(results.size()));
}

// 按属性值范围查询温室环境数据
void DatabaseWorker::queryGreenhouseDataByValueRange(const QString &attributeName, double minValue, double maxValue)
{
    qDebug() << "[DatabaseWorker] 开始按属性值范围查询数据";
    qDebug() << "[DatabaseWorker] 属性名: " << attributeName 
             << "，值范围: " << minValue << " - " << maxValue;
    
    // 使用成员变量attributeMap映射中文属性名到数据库字段名
    
    // 检查属性名是否有效
    if (!attributeMap.contains(attributeName)) {
        qDebug() << "[DatabaseWorker] 无效的属性名: " << attributeName;
        emit queryResultsReady(false, QList<QVariantList>(), "无效的属性名: " + attributeName);
        return;
    }
    
    QString dbFieldName = attributeMap.value(attributeName);
    
    QMutexLocker locker(&mutex); // QMutexLocker 在作用域结束（函数返回）时自动解锁
    if (!checkConnection()) {
        return;
    }
    
    QSqlQuery query(db);
    // 使用参数化查询按属性值范围查询数据
    QString selectQuery = "SELECT entry_id, collect_time, air_temp, air_humidity, oxygen_content, soil_temp, soil_humidity, light_intensity "
                         "FROM greenhouse_data "
                         "WHERE " + dbFieldName + " BETWEEN ? AND ? "
                         "ORDER BY collect_time DESC";
    
    query.prepare(selectQuery);
    // 绑定值参数
    query.addBindValue(minValue);
    query.addBindValue(maxValue);
    
    if (!query.exec()) {
        qDebug() << "[DatabaseWorker] 属性值范围查询失败: " << query.lastError().text();
        emit queryResultsReady(false, QList<QVariantList>(), "查询失败: " + query.lastError().text());
        return;
    }
    
    // 使用辅助方法处理查询结果
    QList<QVariantList> results = processQueryResults(query, "属性值范围");
    emit queryResultsReady(true, results, QString("查询成功，共 %1 条数据").arg(results.size()));
}
