#include "widget.h"
#include <QPushButton>
#include"swidget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(800,600);
    this->setWindowTitle("登录");

    //定义一个查询窗口
    SWidget *s = new SWidget();

    //创建一个下一页的按钮
    QPushButton *btn = new QPushButton("下一页",this);
    connect(btn,&QPushButton::clicked,[=](){
        //当前窗口隐藏
        this->hide();
        //查询窗口显示
        s->show();
    });

    //监测查询窗口s的回退信号
    connect(s,&SWidget::back,[=](){
        //隐藏查询窗口
        s->hide();
        //显示当前窗口
        this->show();
    });

}

Widget::~Widget()
{

}
