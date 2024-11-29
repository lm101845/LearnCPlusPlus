//2024年11月29日11:45:25

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术
//函数占位参数 ，占位参数也可以有默认参数
void func(int a, int) {
//void func(int a, int = 10) {
	cout << "this is func" << endl;
}

int main()
{
	func(10, 10); //占位参数必须填补
	system("PAUSE");
}
