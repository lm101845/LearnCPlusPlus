//2024年11月12日12:06:39

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//1.定义指针
	int a = 10;
	//指针定义的语法：数据类型* 指针变量
	int* p;
	//整型变量应该定义整型指针来保存其地址
	//让指针记录变量a的地址(&:取地址符号)
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//指针记录的就是a变量的地址

	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//解引用：指针前加*代表解引用，可以找到指针指向的内存中的数据
	//*p可以访问及修改值

	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	system("pause");
	return EXIT_SUCCESS;
}
