/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_2;
    QLabel *label_26;
    QFrame *line_2;
    QLabel *label_27;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_16;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_7;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_12;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_23;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_3;
    QLabel *label_17;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_4;
    QLabel *label_18;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_5;
    QLabel *label_19;
    QCheckBox *checkBox_6;
    QLineEdit *lineEdit_6;
    QLabel *label_20;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_7;
    QLabel *label_21;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_8;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_24;
    QSlider *horizontalSlider;
    QLabel *label_25;
    QGridLayout *gridLayout_4;
    QLabel *label_28;
    QSpinBox *spinBox;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_4;
    QFrame *frame_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1089, 714);
        Widget->setMinimumSize(QSize(700, 600));
        verticalLayout_7 = new QVBoxLayout(Widget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName("toolButton");
        toolButton->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(toolButton);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout_3->addLayout(horizontalLayout);

        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        verticalLayout_10 = new QVBoxLayout(widget);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(80, 30));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName("toolButton_2");

        horizontalLayout_2->addWidget(toolButton_2);

        label_26 = new QLabel(frame);
        label_26->setObjectName("label_26");

        horizontalLayout_2->addWidget(label_26);

        line_2 = new QFrame(frame);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line_2);

        label_27 = new QLabel(frame);
        label_27->setObjectName("label_27");

        horizontalLayout_2->addWidget(label_27);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_8->addWidget(frame);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");
        label_16->setEnabled(true);
        label_16->setMaximumSize(QSize(125, 36));

        verticalLayout_2->addWidget(label_16);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 3, 1, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 4, 2, 1, 1);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 1, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 1, 2, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        line = new QFrame(frame_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 3);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 4, 1, 1, 1);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 4, 0, 1, 1);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_8->addWidget(frame_2);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_23 = new QLabel(frame_3);
        label_23->setObjectName("label_23");

        verticalLayout_4->addWidget(label_23);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        checkBox = new QCheckBox(frame_3);
        checkBox->setObjectName("checkBox");

        gridLayout_3->addWidget(checkBox, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout_3->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_17 = new QLabel(frame_3);
        label_17->setObjectName("label_17");

        gridLayout_3->addWidget(label_17, 0, 2, 1, 1);

        checkBox_2 = new QCheckBox(frame_3);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_3->addWidget(checkBox_2, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout_3->addWidget(lineEdit_4, 1, 1, 1, 1);

        label_18 = new QLabel(frame_3);
        label_18->setObjectName("label_18");

        gridLayout_3->addWidget(label_18, 1, 2, 1, 1);

        checkBox_3 = new QCheckBox(frame_3);
        checkBox_3->setObjectName("checkBox_3");

        gridLayout_3->addWidget(checkBox_3, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(frame_3);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout_3->addWidget(lineEdit_5, 2, 1, 1, 1);

        label_19 = new QLabel(frame_3);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 2, 2, 1, 1);

        checkBox_6 = new QCheckBox(frame_3);
        checkBox_6->setObjectName("checkBox_6");

        gridLayout_3->addWidget(checkBox_6, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(frame_3);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout_3->addWidget(lineEdit_6, 3, 1, 1, 1);

        label_20 = new QLabel(frame_3);
        label_20->setObjectName("label_20");

        gridLayout_3->addWidget(label_20, 3, 2, 1, 1);

        checkBox_5 = new QCheckBox(frame_3);
        checkBox_5->setObjectName("checkBox_5");

        gridLayout_3->addWidget(checkBox_5, 4, 0, 1, 1);

        lineEdit_7 = new QLineEdit(frame_3);
        lineEdit_7->setObjectName("lineEdit_7");

        gridLayout_3->addWidget(lineEdit_7, 4, 1, 1, 1);

        label_21 = new QLabel(frame_3);
        label_21->setObjectName("label_21");

        gridLayout_3->addWidget(label_21, 4, 2, 1, 1);

        checkBox_4 = new QCheckBox(frame_3);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout_3->addWidget(checkBox_4, 5, 0, 1, 1);

        lineEdit_8 = new QLineEdit(frame_3);
        lineEdit_8->setObjectName("lineEdit_8");

        gridLayout_3->addWidget(lineEdit_8, 5, 1, 1, 1);

        label_22 = new QLabel(frame_3);
        label_22->setObjectName("label_22");

        gridLayout_3->addWidget(label_22, 5, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);


        verticalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_8->addWidget(frame_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_24 = new QLabel(widget);
        label_24->setObjectName("label_24");
        label_24->setMinimumSize(QSize(0, 30));
        label_24->setMaximumSize(QSize(16777215, 30));
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_24);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider);

        label_25 = new QLabel(widget);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(0, 30));
        label_25->setMaximumSize(QSize(16777215, 30));
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_25);


        horizontalLayout_3->addLayout(verticalLayout_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_28 = new QLabel(widget);
        label_28->setObjectName("label_28");
        label_28->setMinimumSize(QSize(150, 0));
        label_28->setMaximumSize(QSize(16777215, 30));

        gridLayout_4->addWidget(label_28, 0, 0, 1, 2);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimumSize(QSize(100, 0));
        spinBox->setMaximumSize(QSize(16777215, 60));
        spinBox->setMaximum(100000);

        gridLayout_4->addWidget(spinBox, 1, 0, 1, 1);

        label_29 = new QLabel(widget);
        label_29->setObjectName("label_29");
        label_29->setMaximumSize(QSize(16777215, 60));

        gridLayout_4->addWidget(label_29, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_4);


        verticalLayout_8->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        frame_4 = new QFrame(widget);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(800, 300));
        frame_4->setMaximumSize(QSize(800, 300));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_9->addWidget(frame_4);

        frame_5 = new QFrame(widget);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(800, 300));
        frame_5->setMaximumSize(QSize(800, 300));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_9->addWidget(frame_5);


        horizontalLayout_4->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(widget);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 10);

        verticalLayout_7->addLayout(verticalLayout_3);

        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, checkBox);
        QWidget::setTabOrder(checkBox, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, checkBox_2);
        QWidget::setTabOrder(checkBox_2, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, checkBox_3);
        QWidget::setTabOrder(checkBox_3, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, checkBox_6);
        QWidget::setTabOrder(checkBox_6, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, checkBox_5);
        QWidget::setTabOrder(checkBox_5, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, checkBox_4);
        QWidget::setTabOrder(checkBox_4, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "pushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\275\221\347\273\234\350\277\236\346\216\245", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Widget", ".....", nullptr));
        label_26->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_27->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\347\233\221\346\216\247", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_23->setText(QCoreApplication::translate("Widget", "\346\212\245\350\255\246\351\230\210\345\200\274", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\346\270\251\345\272\246", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\347\233\270\345\257\271\346\271\277\345\272\246", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "\346\260\247\346\260\224\346\265\223\345\272\246", nullptr));
        label_19->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Widget", "\345\234\237\345\243\244\346\270\251\345\272\246", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Widget", "\345\234\237\345\243\244\345\220\253\346\260\264\351\207\217", nullptr));
        label_21->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Widget", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        label_22->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("Widget", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        label_25->setText(QCoreApplication::translate("Widget", "%", nullptr));
        label_28->setText(QCoreApplication::translate("Widget", "\345\226\267\346\260\264\346\227\266\351\227\264", nullptr));
        label_29->setText(QCoreApplication::translate("Widget", "S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
