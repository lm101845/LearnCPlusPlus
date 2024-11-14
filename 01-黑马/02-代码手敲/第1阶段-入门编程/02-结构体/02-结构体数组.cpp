//2024年11月14日11:57:08

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//结构体数组
//语法：struct  结构体名 数组名[元素个数] = {  {} , {} , ... {} }

//1.定义结构体
struct Student {
	string name;
	int age;
	int score;
};



int main()
{
	//2.创建结构体数组
	struct Student stuArray[3] = {
		{"张三",18,80 },
		{"李四",19,60 },
		{"王五",20,70 }
	};

	//3.给结构体数组中的元素赋值
	//结构体中的值，后期是可以改的
	//所以你可以初始化的时候给它一个值，也可以后期再给它赋值，都是可以的
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name << " 年龄：" << stuArray[i].age << " 分数：" << stuArray[i].score << endl;
	}
	system("PAUSE");
}
