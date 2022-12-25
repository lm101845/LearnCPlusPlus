//2022年12月25日12:45:31
#include <iostream>
using namespace std;

void test01()
{
	int arr[5] = { 10,20,30,40,50 };
	//需求：给arr起个别名
	int(&my_arr)[5] = arr;
	//因为中括号优先级比较高，所以外面加上小括号
	//my_arr就是数组arr的别名了
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
		cout << my_arr[i] << " ";
	}
	cout << endl;
}

void test02()
{
	int arr[5] = { 10,20,30,40,50 };
	//1.用typedef给数组类型取个别名
	typedef int TYPE_ARR[5];
	/**
	* typedef int TYPE_ARR[5]; 意思是将数组类型 int[5] 定义为新的类型 TYPE_ARR。
	这种用法经常用于定义固定长度的数组，
	以便在代码中使用更直观、更简洁的方式来声明和定义数组变量。

	例如，在使用 typedef 定义之后，你就可以使用 TYPE_ARR 来声明数组变量，就像这样：
	TYPE_ARR arr1; // 声明一个长度为5的数组变量arr1
	TYPE_ARR arr2 = {1, 2, 3, 4, 5}; // 声明并初始化一个长度为5的数组变量arr2
	 */
	//TYPE_ARR是一个数组类型
	TYPE_ARR& myArr = arr;
	//myArr就是数组arr的别名
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << myArr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
