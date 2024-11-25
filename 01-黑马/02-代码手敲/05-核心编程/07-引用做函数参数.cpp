//2024年11月25日12:15:18

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//作用：函数传参时，可以利用引用的技术让形参修饰实参
// (值传递，形参是不可以修改实参的，地址传递可以)
//优点：可以【简化指针】修改实参

//觉得指针难，可以不用指针，用引用

//1. 值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap01-实参：a:" << a << " b:" << b << endl;
}

//2. 地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "mySwap02-实参：a:" << *a << " b:" << *b << endl;
}

//3. 引用传递
//&为运算符重载，在这里表示变量的引用，之前表示的是取地址操作
void mySwap03(int& a, int& b) {  //用引用方式接收的下面的2个实参，上面a,b是下面实参a,b的别名(别名可以和原名起的一样)
	int temp = a;  
	a = b;         
	b = temp;  
	// 上面的【别名】a是下面实参a的别名，上面的【别名】b是下面实参b的别名，
	//上面的别名a和别名b进行了互换，
	// 则下面的实参a和实参b也就进行了互换
	//你对上面的a,b进行的任何修改，都是在修改下面的a,b

	//引用可以理解为指针【是】常量，可以修改地址的数据，但是不能修改指向
	//其实还是用的指针，只不过指针地址做了一个变量
	cout << "mySwap03-实参：a:" << a << " b:" << b << endl;

}

int main()
{
	int a = 10;
	int b = 20;
	//这2个是实参

	//mySwap01(a, b);  //值传递形参不会修改实参
	//cout << "a:" << a << " b:" << b << endl;

	//mySwap02(&a, &b); //地址传递，形参会修改实参
	//cout << "a:" << a << " b:" << b << endl;

	mySwap03(a, b);  //这2个a,b是实参
	cout << "a:" << a << " b:" << b << endl; //引用，形参会修改实参
	system("PAUSE");
}
