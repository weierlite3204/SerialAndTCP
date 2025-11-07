#ifndef MSGWORKER_H
#define MSGWORKER_H

#include <QObject>
#include<QThread>
#include<QTcpSocket>
#include "sensordata.h"

class MsgWorker : public QThread
{
    Q_OBJECT
public:
    explicit MsgWorker(qintptr sock,QObject *parent = nullptr);

    void disconnect();//断开连接

    ~MsgWorker();

private:
    QTcpSocket *msgsocket;//tcp套接字对象
    qintptr m_sock;//用于初始化tcp套接字的描述符。

protected:
    void run()override;

private:
    void managejson(QByteArray data,QTcpSocket *msgtcp);//解析数据

signals:
    void deletethread();//要销毁线程
    void rawdata(QString);//发送原始数据在调试窗口
    void showsensordata(SensorData);//将接收到的数据，在界面上展示出来

private slots:
    void msgreaddata(QTcpSocket *msgtcp);//读取数据

public slots:
    void sendstrdata(QByteArray data);//发送数据
};

#endif // MSGWORKER_H
