//2024年11月26日12:08:35

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int func(int a, int b = 10, int c = 20) {
	return a + b + c;
}

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a = 10, int b = 10);   //函数声明
int func2(int a = 20, int b = 20) {  //实现也给个默认值，那么编译器就不知道听谁的了
	return a + b;
}

int main()
{
	cout << "ret = " << func(10,20, 30) << endl;
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	system("PAUSE");
}
