//2024年11月25日12:04:10

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//1.引用必须要初始化
//2.引用初始化以后就不可以修改了


int main()
{
	int a = 10;
	//int &b; //错误，引用必须初始化
	int& b = a; //一旦初始化后，就不可以更改

	int c = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	b = c; 
	//b原来是a的别名，现在想改成c的别名了，这个不行
	//但是b = c这个是赋值操作，而不是更改引用，这个是可以的
	//b = c的含义是把c这个20数据赋值给b指向的内存(b和a还是指向的同一块内存)
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	//int &b = c;  //这个才是修改b的别名，这个是不允许的
	////报错：b重定义，多次初始化
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	system("PAUSE");
}
