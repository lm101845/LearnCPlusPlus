//2024年11月21日11:55:52

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//由编译器自动分配释放, 存放函数的参数值, 局部变量等
//注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

int* func(int b) {  //形参数据也会放在栈区
	int a = 10;   //局部变量,存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;
}

int main()
{
	int* p = func(1);
	cout << *p << endl;
	cout << *p << endl;
	//后面应该不是10了，但是目前编译器现在优化了，所以还是10
	system("PAUSE");
}
