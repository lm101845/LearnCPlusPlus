//2024年11月12日12:25:34

//指针一开始不知道指向哪合适，那就指向内存编号为的空间(空指针)
/**
* 空指针：指针变量指向内存中编号为0的空间
**用途：初始化指针变量
**注意：空指针指向的内存是不可以访问的
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int main()
{
	//空指针
	int* p = NULL;
	//注意：空指针指向的内存是不可以访问的
	// 0-255之间的内存编号是系统占用的，因此不可以访问
	//引发了异常: 写入访问权限冲突。p 是 nullptr。
	*p = 100;
	system("PAUSE");
}
