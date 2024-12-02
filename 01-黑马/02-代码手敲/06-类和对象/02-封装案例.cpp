//2024年12月2日11:51:38
//设计一个学生类，属性有姓名和学号，
// 可以给姓名和学号赋值，可以显示学生的姓名和学号


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

class Student {
public:   //公共权限

	//类中的属性和行为，我们统一称为 成员
	//属性：成员属性、成员变量
	//行为：成员函数、成员方法
	string m_Name;  //姓名
	int m_Id;  //学号

	//行为
	//显示姓名和学号
	void showStudent() {
		cout << "name:" << m_Name << " ID:" << m_Id << endl;
	}

	//通过【行为】来给属性赋值
	void setName(string name) {
		m_Name = name;
	}

	void setId(int id) {
		m_Id = id;
	}
};

int main()
{
	//实例化——创建一个具体的雪上
	Student s1;
	s1.m_Name = "张三";
	s1.m_Id = 10;
	s1.showStudent();

	Student s2;
	s2.m_Name = "李四";
	s2.m_Id = 20;
	s2.showStudent();

	Student s3;
	s3.setName("王五");
	s3.setId(30);
	s2.showStudent();
	system("PAUSE");
}
