//2024年11月14日12:29:50

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//const的使用场景
struct Student {
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

void printStudent(struct Student s) {
	cout << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}

//将函数中的形参改成指针，可以减少内存空间(指针只占4/8个字节，且不会像值传递一样复制一个副本出来)
void printStudent1(struct Student* s) {
	s->age = 150;
	//只想让用户进行读取操作，防止用户进行写操作，比如这个，就不合理
	//我们可以在形参前面加const
	cout << "姓名-值传递：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

//将函数中的形参改成指针，可以减少内存空间(指针只占4/8个字节，且不会像值传递一样复制一个副本出来)
void printStudent2(const struct  Student* s) {
	//s->age = 150;  //操作失败，因为加了const修饰
	// 常量指针，const修饰*,取*操作(取值)就不能做了
	//只想让用户进行读取操作，防止用户进行写操作，比如这个，就不合理
	//我们可以在形参前面加const
	cout << "姓名-值传递：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}
int main()
{
	//创建结构体变量
	struct Student stu = { "张三",15,70 };
	//通过函数打印结构体变量信息
	printStudent(stu);
	printStudent1(&stu);
	system("PAUSE");
}
