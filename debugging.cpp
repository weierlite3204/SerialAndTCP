#include "debugging.h"
#include "ui_debugging.h"

debugging::debugging(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::debugging)
{
    ui->setupUi(this);
}

debugging::~debugging()
{
    delete ui;
}
