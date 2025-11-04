/********************************************************************************
** Form generated from reading UI file 'mysql.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSQL_H
#define UI_MYSQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mysql
{
public:

    void setupUi(QWidget *Mysql)
    {
        if (Mysql->objectName().isEmpty())
            Mysql->setObjectName("Mysql");
        Mysql->resize(711, 636);

        retranslateUi(Mysql);

        QMetaObject::connectSlotsByName(Mysql);
    } // setupUi

    void retranslateUi(QWidget *Mysql)
    {
        Mysql->setWindowTitle(QCoreApplication::translate("Mysql", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mysql: public Ui_Mysql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSQL_H
