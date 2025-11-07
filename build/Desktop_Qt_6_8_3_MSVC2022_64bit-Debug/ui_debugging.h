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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_debugging
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textreceive;
    QTextEdit *textsend;
    QVBoxLayout *verticalLayout_2;
    QPushButton *exitbutton;
    QSpacerItem *verticalSpacer;
    QPushButton *updeleteall;
    QPushButton *downdeleteall;
    QPushButton *sendbtn;

    void setupUi(QWidget *debugging)
    {
        if (debugging->objectName().isEmpty())
            debugging->setObjectName("debugging");
        debugging->resize(809, 677);
        horizontalLayout = new QHBoxLayout(debugging);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textreceive = new QTextBrowser(debugging);
        textreceive->setObjectName("textreceive");
        textreceive->setMaximumSize(QSize(16777215, 500));

        verticalLayout->addWidget(textreceive);

        textsend = new QTextEdit(debugging);
        textsend->setObjectName("textsend");

        verticalLayout->addWidget(textsend);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(70);
        verticalLayout_2->setObjectName("verticalLayout_2");
        exitbutton = new QPushButton(debugging);
        exitbutton->setObjectName("exitbutton");

        verticalLayout_2->addWidget(exitbutton);

        verticalSpacer = new QSpacerItem(20, 328, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        updeleteall = new QPushButton(debugging);
        updeleteall->setObjectName("updeleteall");

        verticalLayout_2->addWidget(updeleteall);

        downdeleteall = new QPushButton(debugging);
        downdeleteall->setObjectName("downdeleteall");

        verticalLayout_2->addWidget(downdeleteall);

        sendbtn = new QPushButton(debugging);
        sendbtn->setObjectName("sendbtn");

        verticalLayout_2->addWidget(sendbtn);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(debugging);

        QMetaObject::connectSlotsByName(debugging);
    } // setupUi

    void retranslateUi(QWidget *debugging)
    {
        debugging->setWindowTitle(QCoreApplication::translate("debugging", "Form", nullptr));
        exitbutton->setText(QCoreApplication::translate("debugging", "\351\200\200\345\207\272", nullptr));
        updeleteall->setText(QCoreApplication::translate("debugging", "\344\270\212\346\270\205\345\261\217", nullptr));
        downdeleteall->setText(QCoreApplication::translate("debugging", "\344\270\213\346\270\205\345\261\217", nullptr));
        sendbtn->setText(QCoreApplication::translate("debugging", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debugging: public Ui_debugging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGING_H
