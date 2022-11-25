#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QBitmap>
#include<QImage>
#include<QPicture>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(800,600);
#if 0
    //定义QBitmap一个绘图设备
    QBitmap bit(200,200);
    //定义一个画家
    QPainter painter(&bit);
    painter.drawEllipse(QPoint(100,100),100,100);
    //保存图片
    bit.save("C:\\work\\qt\\day21\\02_test\\bit01.jpg");
#endif
#if 0
    //定义QIamge一个绘图设备
    QImage img;
    img.load(":/image/up.png");

    for(int i=50;i<100;i++)
    {
        for(int j=50;j<100;j++)
        {
            int value= qRgb(255,0,0);
            img.setPixel(i,j,  value);
        }
    }

    //定义一个画家
    QPainter painter(&img);
    painter.drawEllipse(QPoint(30,30),30,30);
    //保存图片
    img.save("C:\\work\\qt\\day21\\02_test\\imge02.jpg");
#endif

#if 1
    //绘图设备
    QPicture picture;
    //画家
    QPainter painter;

    //记录绘图指令
    painter.begin(&picture);
    painter.drawEllipse(100,100,100,100);
    //结束记录绘图指令
    painter.end();

    //保存绘图指令
    picture.save("C:\\work\\qt\\day21\\02_test\\pic.zl");

#endif
}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *event)
{
#if 0
    //定义一个画家
    QPainter *painter = new QPainter(this);
    //划线
    painter->drawLine(0,0,200,200);

    //画矩形
    //画家对 画笔进行设置
    //painter->setPen(Qt::DotLine);//样式
    painter->setPen(Qt::red);//颜色 红色
    painter->drawRect(50,50,100,100);

    //画圆
    painter->drawEllipse(150,150,200,200);
    //画椭圆
    painter->drawEllipse(200,400,200,100);
#endif

#if 1
    QPicture picture;
    QPainter painter(this);
    //绘图设备picture 加载绘图指令
    picture.load("C:\\work\\qt\\day21\\02_test\\pic.zl");

    //画家根据 绘图指令绘图
    painter.drawPicture(100,100, picture);
#endif
}
