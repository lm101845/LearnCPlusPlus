//2024年11月14日12:06:07

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
//结构体指针
//作用：通过指针访问结构体中的成员
//利用操作符【->】 可以通过结构体指针访问结构体属性

//定义学生结构体
struct Student {
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};


int main()
{
	//1.创建学生结构体变量
	struct Student s = { "张三",18,100 };

	//2.通过指针指向结构体变量
	struct Student* p = &s;

	//3.通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	system("PAUSE");
}
