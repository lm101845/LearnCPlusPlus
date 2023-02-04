#include "mywidget.h"
#include "ui_mywidget.h"
#include<QSpinBox>
#include<QSlider>
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    //spinbox改变  导致 slider滑动
    void (QSpinBox:: *p)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, p,\
            ui->horizontalSlider, &QSlider::setValue );

    //拖动 slider 更改spinbox
    connect(ui->horizontalSlider, &QSlider::valueChanged, \
            ui->spinBox, &QSpinBox::setValue );
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::mySetValue(int value)
{
    //设置进度条slider的值
    ui->horizontalSlider->setValue(value);
}

int MyWidget::myGetValue()
{
    //获取进度条的值
    return ui->horizontalSlider->value();
}
