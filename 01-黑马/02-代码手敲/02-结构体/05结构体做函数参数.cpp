//2024年11月14日12:18:17

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//学生结构体定义
struct Student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//传递学生信息函数
//1.值传递(用点【.】)
void printStudent1(struct Student s) {
	s.age = 100;
	//值传递修改形参，不会影响实参(外面的stu,还是18岁)
	cout << "子函数中 姓名：" << s.name << " 年龄： " << s.age << " 分数：" << s.score << endl;
}

//2.地址传递(用箭头【->】)
void printStudent2(struct Student * s) {
	s->score = 60; 
	//地址传递，形参则会影响实参
	cout << "子函数2中 姓名：" << s->name << " 年龄： " << s->age << " 分数：" << s->score << endl;
}

int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息
	//创建结构体变量
	struct Student stu;
	stu.name = "张三";
	stu.age  =18;
	stu.score = 100;
	cout << "main函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	printStudent1(stu);
	cout << "main函数2中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	printStudent2(&stu);
	cout << "main函数3中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;


	system("PAUSE");
}
