//2024年11月13日11:41:34

//值传递时，形参改变不了实参
//而利用指针作函数参数，可以修改实参的值

//总结：如果不想修改实参，就用值传递，如果想修改实参，就用地址传递
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//1.值传递
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1a = " << a << endl; //函数体里面的形参是会变的
	cout << "swap1b = " << b << endl; //函数体里面的形参是会变的
}

//2.地址传递
void swap2(int* p1, int* p2) 
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	/**
	*变量a本身（即其名称）不会存储在内存中，但变量a所指向的内存地址会存储在符号表（symbol table）中，
	*这是编译器在编译过程中用于管理和跟踪标识符（如变量名、函数名等）的一种数据结构。
	* 
	*/
	int a = 10;   
	int b = 20;   
	swap1(a, b); // 值传递不会改变(外侧的)实参
	cout << "a = " << a << endl; //不会变

	cout << "b = " << b << endl; //不会变

	int c = 30;
	int d = 40;    
	swap2(&c, &d); // 引用传递会改变(外侧的)实参
	cout << "c = " << c << endl; //会变

	cout << "d = " << d << endl; //会变
	system("PAUSE");
}
