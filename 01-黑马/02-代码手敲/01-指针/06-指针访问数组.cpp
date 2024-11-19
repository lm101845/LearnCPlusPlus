//2024年11月13日08:24:19

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;




int main()
{
	//指针和数组
	//利用指针访问数组中的元素
	//数组名，还有另一个作用，它也表示数组的首个元素的地址
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素： " << arr[0] << endl;

	int* p = arr;  //arr就是数组首地址
	cout << "指针访问第一个元素： " << *p << endl;

	p++;  //让指针跨一步(向后偏移4个字节)
	//在C++中，当给指针添加一个值的时候，
	//实际上添加的值就是把这个值乘以指针引用的数据类型的代傲
	cout << "指针访问第二个元素： " << *p << endl;

	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p2 << endl;
		p2++;
	}
	system("PAUSE");
}
