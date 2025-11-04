/********************************************************************************
** Form generated from reading UI file 'debugging.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGING_H
#define UI_DEBUGGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_debugging
{
public:

    void setupUi(QWidget *debugging)
    {
        if (debugging->objectName().isEmpty())
            debugging->setObjectName("debugging");
        debugging->resize(647, 601);

        retranslateUi(debugging);

        QMetaObject::connectSlotsByName(debugging);
    } // setupUi

    void retranslateUi(QWidget *debugging)
    {
        debugging->setWindowTitle(QCoreApplication::translate("debugging", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debugging: public Ui_debugging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGING_H
