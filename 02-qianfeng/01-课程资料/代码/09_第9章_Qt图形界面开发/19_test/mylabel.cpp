#include "mylabel.h"
#include<QDebug>
#include<QMouseEvent>
MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
    //设置鼠标跟踪功能（用户不需要按下鼠标）
    this->setMouseTracking(true);

    //1、加载事件过滤器
    this->installEventFilter(this);
}

void MyLabel::enterEvent(QEvent *event)
{
    qDebug()<<"鼠标进入了"<<endl;
}

void MyLabel::leaveEvent(QEvent *event)
{
    qDebug()<<"鼠标离开了"<<endl;
}

void MyLabel::mouseMoveEvent(QMouseEvent *ev)
{
    //默认的情况下 必须鼠标按下 才能移动
    qDebug()<<"鼠标左键移动了 x = "\
               <<ev->x()<<", y = "<<ev->y()<<endl;
}

void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    //ev包含了我们所需要的坐标信息
    if(ev->button() == Qt::LeftButton )
    {
        qDebug()<<"mousePressEvent鼠标左键按下了 x = "\
               <<ev->x()<<", y = "<<ev->y()<<endl;
    }
    else if(ev->button() == Qt::RightButton)
    {
        qDebug()<<"mousePressEvent鼠标右键按下了 x = "\
               <<ev->x()<<", y = "<<ev->y()<<endl;
    }
}

//事件分发器  e存放具体的事件
bool MyLabel::event(QEvent *e)
{
    //我只关系鼠标按下事件
    if(e->type() == QEvent::MouseButtonPress)
    {
        qDebug()<<"在事件分发器中鼠标单击了"<<endl;
        //注意：QEvent类 没有x y
        //QMouseEvent类 有x y
        QMouseEvent *ev = static_cast<QMouseEvent *>(e);
        qDebug()<<"x="<<ev->x()<<", y="<<ev->y()<<endl;
        return true;//当前已经处理 不需要继续下分
    }

    //请调用父类QLabel的event处理其他事件
    return QLabel::event(e);
}

//重写事件过滤器
bool MyLabel::eventFilter(QObject *watched, QEvent *event)
{
    //watched：触发的控件   event具体的事件
    if(watched == this)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            qDebug()<<"事件过滤器过滤器中 鼠标被单击了"<<endl;
            QMouseEvent *ev = static_cast<QMouseEvent *>(event);
            qDebug()<<"x="<<ev->x()<<", y="<<ev->y()<<endl;
            return true;//自己处理
        }
    }

    //对于其他控件以及事件 统统交给父类处理
    return QLabel::eventFilter(watched, event);
}
