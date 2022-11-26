#include "widget.h"
#include "ui_widget.h"
#include<QLabel>
#include<QMovie>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //label设置一个动画
    QMovie *move = new QMovie(":/image/mario.gif");
    //设置动画的大小
    move->setScaledSize(QSize(400,300));
    ui->label->setMovie(move);

    //播放动画
    connect(ui->pushButton, &QPushButton::clicked,[=](){
        move->start();
    } );
    //结束动画
    connect(ui->pushButton_2, &QPushButton::clicked,[=](){
        move->stop();
    }  );

}

Widget::~Widget()
{
    delete ui;
}
