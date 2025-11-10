

#ifndef DATABASEWORKER_H
#define DATABASEWORKER_H

#include <QObject>   // Qt核心对象类
#include <QSqlDatabase> // Qt数据库连接类
#include <QMutex>      // 线程同步互斥锁

class DatabaseWorker : public QObject
{
    Q_OBJECT

public:

    explicit DatabaseWorker(QObject *parent = nullptr);
    

    ~DatabaseWorker();

public slots:
    // 连接到数据库 - 供外部调用的公共槽函数，触发数据库连接操作
    void connectToDatabase();
    
    // 断开数据库连接 - 安全地关闭数据库连接并释放相关资源
    void disconnectFromDatabase();
    
    // 存储温室环境数据到数据库
    void storeGreenhouseData(double airTemp, double airHumidity, double oxygenContent, double soilTemp, double soilHumidity, double lightIntensity);
    
    // 查询所有温室环境数据
    void queryAllGreenhouseData();
    
    // 按时间范围查询温室环境数据
    void queryGreenhouseDataByTimeRange(const QDateTime &startTime, const QDateTime &endTime);
    
    // 按属性值范围查询温室环境数据
    void queryGreenhouseDataByValueRange(const QString &attributeName, double minValue, double maxValue);

signals:
    // 连接状态变化信号 - 当数据库连接状态改变时发出
    // connected: 连接是否成功
    // message: 状态描述消息
    void connectionStatusChanged(bool connected, const QString &message);
    
    // 查询结果信号 - 当查询完成时发出
    // success: 查询是否成功
    // results: 查询结果数据，每个QVariantList代表一行数据
    // message: 状态描述消息
    void queryResultsReady(bool success, const QList<QVariantList> &results, const QString &message);

private:
    // db - 数据库连接对象，用于管理与MySQL数据库的连接
    QSqlDatabase db;
    
    // mutex - 互斥锁，用于保护数据库操作，确保线程安全
    QMutex mutex;
    
    // attributeMap - 中文属性名到数据库字段名的映射表
    QMap<QString, QString> attributeMap;
    
    // connectToMysql - 连接到MySQL数据库的内部实现方法
    // 返回值: 连接是否成功
    bool connectToMysql();
    
    // checkConnection - 检查数据库连接状态的辅助方法
    // 返回值: 连接是否有效
    bool checkConnection();
    
    // processQueryResults - 处理查询结果的辅助方法
    // query: 已执行的查询对象
    // queryType: 查询类型描述，用于日志
    // 返回值: 包含查询结果的数据列表
    QList<QVariantList> processQueryResults(QSqlQuery &query, const QString &queryType);
};

#endif // DATABASEWORKER_H
