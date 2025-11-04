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
};

#endif // DEBUGGING_H
