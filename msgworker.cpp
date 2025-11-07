#include "msgworker.h"
#include "sensordata.h"

#include <QByteArray>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QMap>

MsgWorker::MsgWorker(qintptr sock,QObject *parent)//构造函数
    : QThread{parent},m_sock(sock)
{

}

void MsgWorker::disconnect()//断开连接
{
    msgsocket->disconnectFromHost();
}

MsgWorker::~MsgWorker()//析构函数
{
    if(msgsocket){
        msgsocket->deleteLater();
    }
}

//线程启动，构建TcpSocket对象，读取数据
void MsgWorker::run()
{
    //sql=new LinkSQL(this);
    msgsocket=new QTcpSocket;
    msgsocket->setSocketDescriptor(m_sock);
    connect(msgsocket,&QTcpSocket::readyRead,this,[this](){//有数据要接受
        qDebug()<<"--------------数据到达"<<'\n';
        msgreaddata(msgsocket);
    },Qt::DirectConnection);
    connect(msgsocket, &QTcpSocket::disconnected,this, [this](){
        qDebug()<<"线程结束-------------"<<'\n';
        quit();// 终止事件循环，让run()退出
        emit deletethread();// 通知主线程销毁线程对象
    },Qt::DirectConnection);
    exec();//开始事件循环
    // 添加errorOccurred信号处理，确保异常断开时也能触发线程销毁流程
    connect(msgsocket, &QTcpSocket::errorOccurred, this, [this](QAbstractSocket::SocketError){
        qDebug()<<"socket错误："<<msgsocket->errorString();
        quit();
        emit deletethread();
    }, Qt::DirectConnection);
}

//接收下位机传来的数据
void MsgWorker::msgreaddata(QTcpSocket *msgtcp)
{
    //TCP 是 “流式传输”，客户端发送的多个数据包可能被合并成一个 “数据流” 到达服务器
    //用while循环持续处理socket中所有可用数据
    while(msgtcp->bytesAvailable()>0){//收到的数据不为空
        if(msgtcp->bytesAvailable()<static_cast<qint64>(sizeof(qint64))){//可读取的字节数小于8字节
            return;
        }

        // msgtcp->read(reinterpret_cast<char*>(&len), sizeof(len));//读取8字节的数据（二进制流），存入len变量。
        // len = qFromBigEndian(len);// 网络字节序→主机字节序，因为之前传输的时候变成了大端，所以接收的时候要反转
        // while (msgtcp->bytesAvailable() < len) {
        //     if (!msgtcp->waitForReadyRead(1000))//等1s，超时为假，！假为真
        //         break;
        // }
        QByteArray data = msgtcp->readAll();//读取全部数据
        managejson(data,msgtcp);//解析数据
    }
}

void MsgWorker::sendstrdata(QByteArray data)//发送数据给下位机
{
    qDebug()<<"发送数据"<<'\n';
    msgsocket->write(data);
    msgsocket->flush();
}


void MsgWorker::managejson(QByteArray data, QTcpSocket *msgtcp)
{
    SensorData result;
    // 1. 转换为QString并预处理（去除首尾空白字符）
    QString rawStr = QString(data).trimmed();
    emit rawdata(rawStr);//发送原始数据到调试终端。

    if (rawStr.isEmpty()) {
        qWarning() << "数据为空";
        return;
    }

    // 2. 校验外层格式并提取核心内容
    const QString prefix = "{Params[";
    const QString suffix = "]}";
    if (!rawStr.startsWith(prefix) || !rawStr.endsWith(suffix)) {
        qWarning() << "数据格式错误，不符合 {Params[...]} 规则";
        return;
    }

    // 提取中间的键值对部分（去掉前缀和后缀）
    QString content = rawStr.mid(prefix.length(), rawStr.length() - prefix.length() - suffix.length());
    if (content.isEmpty()) {
        qWarning() << "数据内容为空";
        return;
    }

    // 3. 按 ; 分割键值对（过滤空字符串，避免最后一个 ; 导致的空项）
    QStringList keyValueList = content.split(';', Qt::SkipEmptyParts);
    if (keyValueList.isEmpty()) {
        qWarning() << "未找到有效键值对";
        return;
    }

    // 4. 解析每个键值对并存储
    QMap<QString, double> tempMap;  // 临时用哈希表存储，便于灵活赋值
    for (const QString& kv : keyValueList) {
        QStringList parts = kv.split(':', Qt::KeepEmptyParts);
        if (parts.size() != 2) {  // 必须是 "键:值" 格式
            qWarning() << "无效的键值对格式：" << kv;
            continue;
        }

        QString key = parts[0].trimmed();    // 参数名（如"atemp"）
        QString valueStr = parts[1].trimmed();  // 参数值字符串（如"69.3"）

        // 转换数值为double
        bool ok = false;
        double value = valueStr.toDouble(&ok);
        if (!ok) {
            qWarning() << "参数值转换失败，键：" << key << "，值：" << valueStr;
            continue;
        }

        tempMap[key] = value;  // 存入哈希表
    }

    // 5. 将哈希表的值赋值给结构体（确保参数存在，避免使用未初始化的值）
    if (tempMap.contains("atemp"))    result.atemp = tempMap["atemp"];
    if (tempMap.contains("ahumi"))    result.ahumi = tempMap["ahumi"];
    if (tempMap.contains("oxygen"))   result.oxygen = tempMap["oxygen"];
    if (tempMap.contains("stemp"))    result.stemp = tempMap["stemp"];
    if (tempMap.contains("shumi2"))   result.shumi2 = tempMap["shumi2"];
    if (tempMap.contains("light"))    result.light = tempMap["light"];

    emit showsensordata(result);
}
