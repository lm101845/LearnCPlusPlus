#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

    //提供设置slider的value接口
    void mySetValue(int value);
    //提供获取slider的value接口
    int myGetValue(void);

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
