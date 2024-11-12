//2024年11月12日08:29:57
//swap.cpp文件
//双引号代表自定义头文件
#include "swap.h"

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}