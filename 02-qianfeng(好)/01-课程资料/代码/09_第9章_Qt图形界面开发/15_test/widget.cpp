#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QPixmap>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置图片
    QPixmap pix;
    //给pix控件 加载一张图片
    pix.load(":/image/sunny.png");
    ui->label_2->setPixmap(pix);


}

Widget::~Widget()
{
    delete ui;
}
