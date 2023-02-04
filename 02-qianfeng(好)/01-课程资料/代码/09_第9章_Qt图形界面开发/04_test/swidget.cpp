#include "swidget.h"
#include<QPushButton>
SWidget::SWidget(QWidget *parent) : QWidget(parent)
{
    //设置查询窗口的大小
    this->resize(800,600);
    this->setWindowTitle("查询窗口");

    //定义一个回退按钮
    QPushButton *btn = new QPushButton("back",this);

    //当按下back 就发出一个back信号
    connect(btn,&QPushButton::clicked,[=](){
        emit this->back();
    });
}
