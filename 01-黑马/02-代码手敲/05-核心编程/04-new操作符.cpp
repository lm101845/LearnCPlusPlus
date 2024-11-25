//2024年11月25日11:44:23

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int* func() {
	//在堆区创建一个整型数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}

//1.new的基本语法
void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟，由程序员管理释放
	delete p;
	//cout << *p << endl;  
	//引发了异常: 读取访问权限冲突
	//此时内存已经释放，在此访问即为非法操作，会报错

}

//2.在堆区利用new开辟数组
void test02() {
	//在堆区创建10整型数据的数组
	int* arr = new int[10]; //10代表数组有10个元素 	//数组名就是首地址

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区的数组
	//注意：释放数组的时候，要加【[]】才可以
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("PAUSE");
}
