#include "mainwindow.h"
#include<QMenuBar>//菜单栏
#include<QToolBar>//工具栏
#include<QStatusBar>//状态栏
#include<QLabel>//label标签 显示文本 图片 动画
#include<QDockWidget>//铆接部件
#include<QTextEdit>//文本编译控件
#include<QPixmap>//图片控件
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //设置窗口标题
    this->setWindowTitle("QMianWindow");
    //设置窗口的大小
    this->resize(800,600);

    //创建一个菜单栏
    QMenuBar *menuBar = new QMenuBar(this);

    //将菜单栏添加到主窗口中
    this->setMenuBar(menuBar);

    //定义菜单
    QMenu *file = new QMenu("文件",this);
    QMenu *edit = new QMenu("编辑",this);

    //在菜单栏中添加菜单
    menuBar->addMenu(file);
    menuBar->addMenu(edit);

    //定义菜单项
    QAction *New = new QAction("New",this);
    QAction *Save = new QAction("Save",this);

    //将菜单项 添加到 菜单中
    file->addAction(New);
    file->addSeparator();//插入一个华丽的分割线
    file->addAction(Save);


    //给菜单项New 设置快捷键
    New->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_N));
    //让New动起来
    connect(New, &QAction::triggered,[=](){
        qDebug()<<"新建文件了"<<endl;
    } );


    //创建一个工具栏
    QToolBar *tool = new QToolBar(this);
    //将工具栏添加到 主窗口中
    this->addToolBar(tool);

    //将菜单项 New Edit放入工具栏中
    tool->addAction(New);
    tool->addSeparator();
    tool->addAction(Save);

    //工具栏默认是允许浮动  false不允许浮动
    tool->setFloatable(false);

    //设置工具栏 允许的区域
    tool->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);

    //创建一个状态栏
    QStatusBar *status = new QStatusBar(this);
    //将状态栏 添加到  主窗口中
    this->setStatusBar(status);

    //创建两个label
    QLabel *label1 = new QLabel("左侧提示信息",this);
    QLabel *label2 = new QLabel("右侧提示信息",this);
    //添加左侧控件
    status->addWidget(label1);
    //添加右侧控件
    status->addPermanentWidget(label2);

    //创建一个铆接部件
    QDockWidget *dock = new QDockWidget("铆接", this);
    //将铆接部件 添加到 主窗口中
    this->addDockWidget(Qt::TopDockWidgetArea,dock);
    //设置铆接部件的停靠位置(上下停靠)
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

    //设置一个 中心部件
    //创建一个文本域 显示文字
    QTextEdit *text = new QTextEdit(this);
    text->setText("床前明月光\n疑似地上霜");
    this->setCentralWidget(text);

    //给菜单项 添加一个图标
    //创建一个图片控件
    QPixmap pix;
    //图片控件添加 资源图片
    //:表示资源文件 + 加上图片在资源文件中的路径
    pix.load(":/image/New.png");
    New->setIcon(QIcon(pix));

}

MainWindow::~MainWindow()
{

}
