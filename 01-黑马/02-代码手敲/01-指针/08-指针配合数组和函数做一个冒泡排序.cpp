//2024年11月13日11:58:54

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//冒泡排序函数
//参数1：数组的首地址
//参数2：数组长度
void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		//内层循环的比较次数会越来越少
		for (int j = 0; j < len - i - 1; j++) {
			//如果j > j+1的值  交换数组
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << "arr元素" << arr[i] << endl;
	}
}
//封装一个函数，利用冒泡排序，实现对整型数组的升序排序
int main()
{
	//1.先创建一个数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	/**
	*在C++中，原生数组（如 int arr[10];）并不提供 .length 或类似的成员方法来直接获取其长度。
	 C++数组的大小是在编译时确定的，并且在运行时并不携带关于其长度的直接信息
	（与某些高级语言如Java或Python中的数组/列表不同）。要获取C++数组的长度，
	 你通常需要使用 sizeof 运算符和数组类型来手动计算。
	*/

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.创建函数、实现冒泡排序
	bubbleSort(arr, len);
	//3.打印排序后的数组
	printArray(arr, len);
	system("PAUSE");
}
