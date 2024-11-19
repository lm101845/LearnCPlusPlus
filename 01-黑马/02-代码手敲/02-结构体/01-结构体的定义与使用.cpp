//2024年11月14日11:45:02

//> 总结1：定义结构体时的关键字是struct，不可省略
//> 总结2：创建结构体变量时，关键字struct可以省略
//> 总结3：结构体变量利用操作符 ''.''  访问成员

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//1.创建学生数据类型：学生包括(姓名、年龄、分数)
//自定义数据类型：一些类型的集合组成的一个类型
//语法：struct 结构体名 { 结构体成员列表 }；
struct Student {
	string name;
	int age;
	int score;
};

struct Student2
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
}stu3; //结构体变量创建方式3 

//2.通过学生类型创建具体学生(三种方式)
int main()
{	
	// 2.1
	struct Student stu1; //struct 关键字可以省略
	//给s1属性赋值,通过【.】访问结构体变量中的属性
	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;
	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

	//2.2
	struct Student stu2 = { "李四",19,60 };
	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;

	//2.3——定义结构体的同时【顺便】创建一个结构体变量
	//第3种方式不建议用，因为人们很可能忽略你创建的后面的变量stu3
	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 80;
	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;
	system("PAUSE");
}
