#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //界面的设计是在 窗口控件的构造函数中设计
    //this 代表的是当前的主窗口

    //设置主窗口的标题 set   title
    this->setWindowTitle("第一个窗口");
}

Widget::~Widget()
{

}
