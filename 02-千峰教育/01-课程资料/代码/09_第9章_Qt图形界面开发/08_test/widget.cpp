#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QString>
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //单击登录 获取用户输入的用户名和密码
    connect(ui->pushButton, &QPushButton::clicked,[=](){
        //获取用户名
        QString user = ui->lineEditUser->text();
        QString pwd = ui->lineEditPwd->text();

        qDebug()<<"用户名:"<<user<<", 密码："<<pwd<<endl;
    } );
}

Widget::~Widget()
{
    delete ui;
}
