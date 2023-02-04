#include "widget.h"
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //this  代表当前主窗口
    //设置标题
    this->setWindowTitle("第一个窗口");

    //固定窗口（不可拖动）
    //this->setFixedSize(800,600);
    //设置窗口大小(可拖动)
    this->resize(800,600);

    //在窗口上放一个按钮
    //创建一个button控件
    //parent父对象为this 表明 主窗口 将来接管button
    //因为我希望将button放到当前窗口中 this代表当前窗口
    QPushButton *button = new QPushButton("戳我呀",this);

    QPushButton *button1 = new QPushButton("咬我呀",this);
    //默认控件会显示到主窗口的左上方
    //移动按钮
    button1->move(400,300);
}

Widget::~Widget()
{

}
