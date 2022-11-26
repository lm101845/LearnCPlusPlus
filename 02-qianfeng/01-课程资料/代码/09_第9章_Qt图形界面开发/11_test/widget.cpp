#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    this->resize(800,600);
    ui->setupUi(this);
    //设置树控件的头信息
    QStringList list;
    list<<"英雄"<<"英雄的介绍";
    ui->treeWidget->setHeaderLabels(list);

    //添加顶层控件
    QTreeWidgetItem *item1 = new QTreeWidgetItem(QStringList()<<"德玛");
    ui->treeWidget->addTopLevelItem(item1);
    //QTreeWidgetItem *child = new QTreeWidgetItem(QStringList()<<"上单"<<"坦克，攻高防厚");
    //item1->addChild(child);
    item1->addChild(new QTreeWidgetItem(QStringList()<<"上单"<<"坦克，攻高防厚"));

    QTreeWidgetItem *item2 = new QTreeWidgetItem(QStringList()<<"盲僧");
    ui->treeWidget->addTopLevelItem(item2);
    item2->addChild(new QTreeWidgetItem(QStringList()<<"打野"<<"战士，攻高防少"));

    QTreeWidgetItem *item3 = new QTreeWidgetItem(QStringList()<<"提莫");
    ui->treeWidget->addTopLevelItem(item3);
    item3->addChild(new QTreeWidgetItem(QStringList()<<"上单"<<"法师，攻高防少"));

    //动起来
    connect(ui->treeWidget, &QTreeWidget::itemClicked,[](QTreeWidgetItem *item,int column){
        qDebug()<< item->text(column).toUtf8().data() <<endl;
    } );
}

Widget::~Widget()
{
    delete ui;
}
