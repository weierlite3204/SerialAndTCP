#ifndef MYSQL_H
#define MYSQL_H

#include <QWidget>

namespace Ui {
class Mysql;
}

class Mysql : public QWidget
{
    Q_OBJECT

public:
    explicit Mysql(QWidget *parent = nullptr);
    ~Mysql();

private:
    Ui::Mysql *ui;
};

#endif // MYSQL_H
