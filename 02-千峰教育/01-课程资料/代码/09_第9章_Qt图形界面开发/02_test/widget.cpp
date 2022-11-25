#include "widget.h"
#include<QPushButton>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //设置窗口标题
    this->setWindowTitle("信号");
    //设置窗口大小
    this->resize(800,600);
    //创建一个按钮
    QPushButton *btn1=new QPushButton("关闭",this);
    //需求：单击btn1 关闭主窗口
    //信号的发起者btn1 发出信号   主窗口this  关闭（槽函数）
    connect(btn1, &QPushButton::clicked, this, &QWidget::close);


    //lambda表达式
    QPushButton *btn2 =new QPushButton("戳我呀",this);
    btn2->move(400,300);
    connect(btn2, &QPushButton::clicked, [=](){
        //获取按钮上的文本
        QString text = btn2->text();
        qDebug()<<text <<endl;

        //设置按钮的文本
        btn2->setText("戳你咋地?");
    } );
}

Widget::~Widget()
{

}
