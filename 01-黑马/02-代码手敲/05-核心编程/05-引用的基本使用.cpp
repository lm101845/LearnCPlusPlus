//2024年11月25日11:55:14

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//引用的本质：给变量起【别名】
// 语法： 数据类型(要和原名数据类型一样) &别名 = 原名
//不看答案自做



int main()
{
	int a = 10;
	int& b = a;   //此时a,b等价,此时b是新的【变量】——而不是新的【指针】！！
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	b = 20;  //注意，这里是b=20,而不是*b=20
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("PAUSE");
}
