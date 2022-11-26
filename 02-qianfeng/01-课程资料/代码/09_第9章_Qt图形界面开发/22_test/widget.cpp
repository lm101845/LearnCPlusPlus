#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //单击button 设置一般
    connect(ui->pushButton, &QPushButton::clicked,[=](){
        ui->widget->mySetValue(50);
    } );

    //单击button 获取 进度条的值
    connect(ui->pushButton_2, &QPushButton::clicked,[=](){
        qDebug()<<ui->widget->myGetValue()<<endl;
    } );
}

Widget::~Widget()
{
    delete ui;
}
