//2024年11月26日08:07:45

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//函数的返回值类型也可以是一个引用
//注意事项：
//1.不要返回局部变量的应用
int& test01() {
	int a = 10;    //局部变量存放在四区中的栈区
	return a;
	//ref就是a，a的别名就是ref
}

//2.函数的调用可以作为左值
int& test02() {
	static int a = 10;  //静态变量-存放在全局区——全局区上的数据在程序结束后系统释放
	return a;
}
int main()
{
	//不能返回局部变量的引用
	//int& ref = test01();
	//cout << "ref = " << ref << endl; //第一次结果正确，因为编译器做了保留(我这里也错了)
	//cout << "ref = " << ref << endl; //第二次结果错误，因为a的内存已经被释放

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;  //函数调用在等号左边，作为左值 test02()返回的就是变量ref2

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	system("PAUSE");
}
