//2024年11月14日12:12:24

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

struct Student {
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//定义老师结构体
struct Teacher {
	//成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct Student stu; //子结构体 学生
	//不写学生结构体的话会报错：不允许使用不完整的类型
};

int main()
{
	//结构体嵌套结构体
	//创建结构体
	struct Teacher t1;
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 40;
	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

	system("PAUSE");
}
