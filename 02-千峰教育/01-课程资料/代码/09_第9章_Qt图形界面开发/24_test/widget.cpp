#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPixmap>
#include<QPushButton>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(800,600);

    //将button一定到最下方的中间位置
    //窗口的宽 this->width(); 高 this->height();
    //按钮的宽 ui->pushButton->width(); 高ui->pushButton->height()
    ui->pushButton->resize(120,80);
    ui->pushButton->move( 0.5*(this->width()- ui->pushButton->width()),\
                          this->height()-ui->pushButton->height());
    connect(ui->pushButton, &QPushButton::clicked,[=](){

        //重新绘制加载绘图事件
        this->update();
    } );
}

Widget::~Widget()
{
    delete ui;
}
//重写绘图事件
void Widget::paintEvent(QPaintEvent *event)
{
    static int x = 0;
    //定义一个画家
    QPainter *painter = new QPainter(this);
    //定义一个图片控件
    QPixmap pix;
    pix.load(":/image/sunny.png");
    pix.scaled( pix.width()*0.5, pix.height()*0.5);

    //画家绘图
    //drawPixmap前两个参数是起点坐标

    painter->drawPixmap(x,0, pix.width(), pix.height(),pix);
    x+=2;
    if(x >= this->width())
    {
        x = 0;
    }
}
