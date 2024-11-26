//2024年11月26日11:56:09

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//打印数据函数
void showValue(const int& val) {   //加const是为了防止误操作，修改了形参(和实参)
//void showValue(int &val) {
	//val = 1000;  //此时下面的a也变成1000了，可能误操作，被修改了
	cout << val << endl;
}

int main()
{
	//常量引用
	//使用场景：用来修饰形参，防止误操作
	int a = 10;
	//int& ref = 10;   //引用必须引一块合法的内存空间，这个10是一个字面量，不能直接引

	//加上const之后，编译器将代码修改 int temp = 10; const in &ref = temp;(原名编译器帮你编了一个)

	const int& ref = 10;
	//ref = 20;   //加入const之后，变成了只读，不可以修改

	showValue(a);
	system("PAUSE");
}
