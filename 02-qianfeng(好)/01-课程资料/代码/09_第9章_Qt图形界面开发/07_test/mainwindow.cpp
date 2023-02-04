#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QAction>
#include<QDebug>
#include<QDialog>
#include<QMessageBox>
#include<QFontDialog>
#include<QColorDialog>
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //通过ui指针成员 去访问 UI文件上的空间
    connect(ui->actionNew, &QAction::triggered,[=](){
        qDebug()<<"新建文件了"<<endl;
    } );
    //
#if 0
    //模态对话框
    QDialog *dlg = new QDialog(this);
    //有警告：原因是弹出的对话框太小  可以重置对话框的大小
    dlg->resize(200,100);
    dlg->exec();
    qDebug()<<"显示模态对话框"<<endl;

#endif
#if 0
    //非模态对话框
    QDialog *dlg = new QDialog(this);
    dlg->resize(200,100);
    dlg->show();
    qDebug()<<"显示非模态对话框"<<endl;

#endif
#if 0
    //弹出一个错误框(模态的)
    QMessageBox::critical(this,"错误","很严重的错误提示");
#endif
#if 0
    //弹出一个信息提示(模态的)
    QMessageBox::information(this,"信息","重要信息");
#endif
#if 0
    //弹出一个询问对话框(模态的)
    //QMessageBox::question(this,"询问","请立即重置");

    //QMessageBox::StandardButton ret;
    int ret;
    ret = QMessageBox::question(this,"询问","请立即重置",\
                          QMessageBox::Save | QMessageBox::Cancel,\
                          QMessageBox::Cancel);
    if(ret == QMessageBox::Save)
    {
        qDebug()<<"用户选择了save"<<endl;
    }
    else if(ret == QMessageBox::Cancel)
    {
        qDebug()<<"用户选择了Cancel"<<endl;
    }

#endif

#if 0
    //字体对话框
    bool yes;
    QFont font;
    font = QFontDialog::getFont(&yes,QFont("宋体"),this);
    if(yes == true)
    {
        qDebug()<<"字体为："<<font.family()<<", 字体大小:"<<font.pointSize()<<endl;
    }

#endif
#if 0
    QColor color;
    color = QColorDialog::getColor();
    qDebug()<<"r = "<<color.red()<<", g = "<<color.green()\
         <<", b = "<<color.blue()<<endl;
#endif
#if 1
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,\
                                            "文件","C:\\work\\image","(*.png *.jpg)");
    qDebug()<<fileName<<endl;
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}
