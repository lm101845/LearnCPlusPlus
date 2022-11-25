#include "widget.h"
#include"teacher.h"
#include"student.h"
#include<QPushButton>
#define N 1
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //设置主窗口大小
    this->resize(800,600);
    //实例化一个老师
    Teacher *tea = new Teacher(this);
    //实例化一个学生
    Student *stu = new Student(this);
#if N
    //connect建立老师和学生的关系
    void (Teacher:: *p1)() = &Teacher::hungry;
    void (Student:: *p2)() = &Student::treat;
    connect(tea,p1, stu, p2);
#else
    //报错的原因：hungry信号被重载了
    //通过函数指针 明确那个信号
    void (Teacher:: *p1)(QString foodName) = &Teacher::hungry;
    void (Student:: *p2)(QString foodName) = &Student::treat;
    connect(tea,p1, stu, p2);
#endif
    //下课了 老师饿了
    QPushButton *btn = new QPushButton("下课", this);
    //connect(btn, &QPushButton::clicked, tea, p1);
/*
    connect(btn,&QPushButton::clicked,[=](){
#if N
        //下课函数：让老师发出饿的信号
        emit tea->hungry();
#else
        //下课函数：让老师发出饿的信号
        emit tea->hungry("锅包肉");
#endif
    });
*/
}

Widget::~Widget()
{

}
