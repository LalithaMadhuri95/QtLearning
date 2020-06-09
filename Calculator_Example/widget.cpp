#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_secondNumber_valueChanged(int arg1)
{
    value2=arg1;
}

void Widget::on_firstNumber_valueChanged(int arg1)
{
    value1=arg1;

}

void Widget::on_pushButton_clicked()
{
      result = value1+value2;
      ui->result->setNum(result);
}

void Widget::on_pushButton_2_clicked()
{
       result = value1-value2;
       ui->result->setNum(result);
}

void Widget::on_pushButton_3_clicked()
{
    result = value1*value2;
    ui->result->setNum(result);
}

void Widget::on_pushButton_4_clicked()
{
     remainder =(double) value1/value2;
    ui->result->setNum(remainder);
}
