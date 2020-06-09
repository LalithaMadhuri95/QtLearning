/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QSpinBox *firstNumber;
    QSpinBox *secondNumber;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *result;
    QLabel *label_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(420, 310);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 40, 131, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        firstNumber = new QSpinBox(Widget);
        firstNumber->setObjectName(QString::fromUtf8("firstNumber"));
        firstNumber->setGeometry(QRect(130, 90, 101, 41));
        secondNumber = new QSpinBox(Widget);
        secondNumber->setObjectName(QString::fromUtf8("secondNumber"));
        secondNumber->setGeometry(QRect(130, 140, 101, 41));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 51, 21));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 71, 16));
        QFont font2;
        font2.setPointSize(11);
        label_3->setFont(font2);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 71, 21));
        label_4->setFont(font2);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 90, 75, 23));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 120, 75, 23));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 150, 75, 23));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 180, 75, 23));
        result = new QLabel(Widget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(110, 230, 141, 41));
        QFont font3;
        font3.setPointSize(16);
        result->setFont(font3);
        result->setAutoFillBackground(true);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 240, 61, 21));
        label_5->setFont(font2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Calculator", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Enter", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Number 1", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Number 2", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Addition", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Subtraction", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Multiply", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "Divide", nullptr));
        result->setText(QString());
        label_5->setText(QCoreApplication::translate("Widget", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
