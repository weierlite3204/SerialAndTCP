#include "mysql.h"
#include "ui_mysql.h"

Mysql::Mysql(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Mysql)
{
    ui->setupUi(this);
}

Mysql::~Mysql()
{
    delete ui;
}
