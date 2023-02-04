#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //给下拉列表框 添加选项
    QStringList list;
    list<<"宝马"<<"奔驰"<<"奥迪"<<"五菱神车";
    ui->comboBox->addItems(list);
    ui->comboBox->resize(200,40);
    //设置默认选项
    ui->comboBox->setCurrentIndex(2);
    //动起来  一旦信号发生重载 记得用函数指针匹配
    void (QComboBox:: *p)(int) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox, p ,[=](int index){
        qDebug()<<"index = "<<index<<endl;
        qDebug()<<ui->comboBox->currentText()<<endl;
    } );
}

Widget::~Widget()
{
    delete ui;
}
