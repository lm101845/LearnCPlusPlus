//2024年11月12日12:32:39

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int* p = (int*)0x1100;
	cout << "*p" << endl;
	//报错：引发了异常: 写入访问权限冲突
	system("PAUSE");
}
