#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRadioButton>
#include<QDebug>
#include<QListWidget>
#include<QListWidgetItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置单选框 默认被选中
    ui->radioButtonNan->setChecked(true);

    connect(ui->radioButtonNan, &QRadioButton::clicked,[=](){
        qDebug()<<"选中了男"<<endl;
    } );

    //列表控件
    //往列表控件里面 添加 Item
    QListWidgetItem *item = new QListWidgetItem("简单爱");
    ui->listWidget->addItem(item);

    //添加：静夜思的后四句
    QStringList list;
    list<<"套马杆"<<"星星点灯"<<"纤夫的爱"<<"天涯";
    ui->listWidget->addItems(list);

    connect(ui->listWidget, &QListWidget::itemClicked,[](QListWidgetItem *item){
        qDebug()<<item->text()<<endl;
    } );
}

MainWindow::~MainWindow()
{
    delete ui;
}
