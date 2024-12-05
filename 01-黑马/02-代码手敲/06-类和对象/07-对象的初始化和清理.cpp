//2024年12月5日12:03:29

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//对象的初始化和清理
//1.构造函数  进行初始化操作
class Person {
public:
// 1.1构造函数
	//1. 构造函数，没有返回值也不写void
	//2. 函数名称与类名相同
	//3. 构造函数可以有参数，因此可以发生重载
	//4. 程序在调用对象时候会自动调用构造，无须手动调用, 而且只会调用一次
	Person() {
		cout << "Person的构造函数调用" << endl;
	}

	//2.析构函数 进行清理的操作
	//析构函数
	//1. 析构函数，没有返回值也不写void
	//2. 函数名称与类名相同, 在名称前加上符号  ~
	//3. 析构函数不可以有参数，因此不可以发生重载
	//4. 程序在对象销毁前会自动调用析构，无须手动调用, 而且只会调用一次
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

//构造和析构都是必须有的实现，如果我们自己不提供，编译器会免费给我们赠送一个构造和析构
void test01()
{
	Person p;  //在栈上的数据，test01执行完毕后，就会释放这个对象
}



int main()
{
	//test01();
	Person p;  //在main函数里，析构在你关闭命令窗口之后才会执行
	system("PAUSE");
}
