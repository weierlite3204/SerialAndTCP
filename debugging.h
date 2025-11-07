#ifndef DEBUGGING_H
#define DEBUGGING_H

#include <QWidget>

namespace Ui {
class debugging;
}

class debugging : public QWidget
{
    Q_OBJECT

public:
    explicit debugging(QWidget *parent = nullptr);
    ~debugging();

private:
    Ui::debugging *ui;

signals:
    void senddata(QByteArray data);    //发送数据的信号
public slots:
    void showdata(QString data); //接收数据并显示到界面中
    void on_sendbtn_clicked();//点击按钮发送数据给下位机
    void on_updeleteall_clicked();//上清屏
    void on_downdeleteall_clicked(); //下清屏
    void on_exitbutton_clicked();//退出按钮
};

#endif // DEBUGGING_H
