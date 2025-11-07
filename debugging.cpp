#include "debugging.h"
#include "ui_debugging.h"

debugging::debugging(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::debugging)
{
    ui->setupUi(this);
}

debugging::~debugging()
{
    delete ui;
}

void debugging::showdata(QString data)
{
    // 假设ui中有一个QTextBrowser名为textBrowser或类似控件用于显示数据
    ui->textreceive->append(data);
}

void debugging::on_sendbtn_clicked()
{
    QString date = ui->textsend->toPlainText();
    QByteArray data = date.toUtf8();
    emit senddata(data);
}

void debugging::on_updeleteall_clicked()
{
    ui->textreceive->clear();
}

void debugging::on_downdeleteall_clicked()
{
    ui->textsend->clear();
}

void debugging::on_exitbutton_clicked()
{
    this->deleteLater();
}


