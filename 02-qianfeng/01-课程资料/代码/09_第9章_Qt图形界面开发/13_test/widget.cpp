#include "widget.h"
#include "ui_widget.h"
#include<QTableWidget>
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置列数3列
    ui->tableWidget->setColumnCount(3);
    //设置水平表头信息
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"英雄"<<"性别"<<"年龄");
    //设置行数5行
    ui->tableWidget->setRowCount(5);

    //往表中添加控件
    //void setItem(int row, int column, QTableWidgetItem *item)
    QStringList name;
    name<<"关羽"<<"张飞"<<"刘备"<<"诸葛亮"<<"赵云";
    QStringList sex;
    sex<<"男"<<"男"<<"男"<<"男"<<"男";
    for(int i=0;i<5;i++)
    {
        ui->tableWidget->setItem(i,0, new QTableWidgetItem(name[i]) );
        ui->tableWidget->setItem(i,1, new QTableWidgetItem(sex[i]) );
        ui->tableWidget->setItem(i,2, new QTableWidgetItem( QString::number(i+20) ) );
    }

    //动起来
    /*
    connect(ui->tableWidget, &QTableWidget::itemClicked,[=](QTableWidgetItem *item){
        qDebug()<<item->text()<<endl;
    } );*/
    connect(ui->tableWidget, &QTableWidget::cellClicked,[=](int row, int col){
        qDebug()<<"row = "<<row<<", col = "<<col<<endl;
    }  );

}

Widget::~Widget()
{
    delete ui;
}
