#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

//MyLabel 继承于  QLabel  就可以在MyLabel类中 重写 QLabel的事件
class MyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = 0);
    //重写鼠标进入事件
    virtual void enterEvent(QEvent *event);
    //重写鼠标离开事件
    virtual void leaveEvent(QEvent *event);

    //重写鼠标移动事件
    virtual void mouseMoveEvent(QMouseEvent *ev);
    //重写鼠标按下事件
    virtual void mousePressEvent(QMouseEvent *ev);

    //重写事件分发器
    virtual bool event(QEvent *e);

    //声明事件过滤器函数
    //watched:事件发生的控件
    //event:具体的时间（鼠标移动 鼠标按下  键盘事件等等）
    virtual bool eventFilter(QObject *watched, QEvent *event);



signals:

public slots:
};

#endif // MYLABEL_H
