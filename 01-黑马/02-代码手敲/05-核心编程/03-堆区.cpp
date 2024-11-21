//2024年11月21日12:02:28

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int* func() {
	//利用new关键字，可以将数据开辟到堆区
	//指针本身也是局部变量，放在栈上，但是指针保存的数据是放在堆区了
	//形参p是被释放了，但是并不影响实参p,实参p指向的地址一直没变，该地址
	//存储的数据也在堆区，所以数据不会变
	int *a = new int(10);
	return a;
}

int main()
{
	//在堆上开辟数据
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	system("PAUSE");
}
