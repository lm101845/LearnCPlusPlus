#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<QPushButton>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //开启两个定时器
    this->id1 = this->startTimer(1000);//1秒
    this->id2 = this->startTimer(2000);//2秒

    //创建一个定时器对象
    QTimer *time = new QTimer(this);
    //让定时器动起来
    connect(time, &QTimer::timeout, [=](){
        static int num = 0;
        ui->label_3->setText(QString::number(num++));
    } );
    //启动定时器
    connect(ui->pushButton, &QPushButton::clicked,[=](){
        time->start(1000);//1秒
    } );
    //暂停定时器
    connect(ui->pushButton_2 , &QPushButton::clicked,[=](){
        time->stop();//暂停
    } );

    //通过singleShot完成延时
    QTimer::singleShot(5000,[=](){
        ui->label_4->setText("哈哈，我喜欢你!!!");
    });

}

Widget::~Widget()
{
    delete ui;
}

//实现定时器事件(唯一)
void Widget::timerEvent(QTimerEvent *e)
{
    static int num1 = 0;
    static int num2 = 0;

    //必须通过timerId()判断是哪个id触发的
    if(e->timerId() == this->id1)
    {
        ui->label->setText(QString::number(num1++));
    }
    else if(e->timerId() == this->id2)
    {
        ui->label_2->setText(QString::number(num2++));
    }
}
