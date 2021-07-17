/*************************************************************************************
 * 文 件 名:   07-sizeof关键字.cpp
 * 创 建 者：  liming
 * 创建时间：  2021/7/17 22:35
*************************************************************************************/


#include<iostream>
using namespace std;

int main() {
	//整型：short(2) int(4) long(4-windows下) long long(8)
	//可以利用sizeof求出数据类型占用的内存大小
	//语法：sizeof(数据类型/变量)
	short num1 = 10;
	//cout << "short占用的内存空间为：" << sizeof(short) << endl;  //2
	cout << "short占用的内存空间为：" << sizeof(num1) << endl;  //2
	//写short或者num1都可以

	int num2 = 10;
	cout << "int占用的内存空间为：" << sizeof(num2) << endl;  //2

	long num3 = 10;
	cout << "long占用的内存空间为：" << sizeof(num3) << endl;  //4

	long long num4 = 10;
	cout << "long long占用的内存空间为："<<sizeof(num4) << endl;  //8

	//整型大小比较
	//short < int <= long < long long  
	system("pause");
	return 0;
}
