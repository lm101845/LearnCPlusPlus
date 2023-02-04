#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //启动定时器事件
    this->startTimer(1000);//单位是毫秒

}

Widget::~Widget()
{
    delete ui;
}

//重写定时器事件
void Widget::timerEvent(QTimerEvent *e)
{
    static int time = 0;
    ui->label->setText(QString::number(time++));
}
