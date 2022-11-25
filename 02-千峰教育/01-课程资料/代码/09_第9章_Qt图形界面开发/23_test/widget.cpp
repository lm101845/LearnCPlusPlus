#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPixmap>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(800,600);
}

Widget::~Widget()
{
    delete ui;
}

//重写绘图事件
void Widget::paintEvent(QPaintEvent *event)
{
    //定义一个画家 画图片
    QPainter *painter = new QPainter(this);

    //定义一个图片控件
    QPixmap pix;
    pix.load(":/image/Sunny.jpg");
    //修改图片大小(和窗口一样大)
    pix.scaled(this->width(),this->height());

    //画家在主窗口绘画
    painter->drawPixmap(0,0,this->width(),this->height(), pix);


}
