//2024年11月12日12:17:43

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//【32位】操作系统下，不管是什么类型的指针，都占4个字节空间
//【64位】操作系统下，不管是什么类型的指针，都占8个字节空间
int main()
{
	//指针所占的内存空间
	int a = 10;
	// 写法1：
	//int* p;
	//p = &a;

	//写法2：简便写法
	int* p = &a;

	//int*和p都行，因为p就是int*类型的
	cout << "size of (int*)" << sizeof(int*) << endl;
	cout << "size of (p)" << sizeof(p)<<endl;
	cout << "size of (float*)" << sizeof(float*) << endl;
	cout << "size of (double*)" << sizeof(double*) << endl;
	cout << "size of (char*)" << sizeof(char*) << endl;
	system("PAUSE");
}
