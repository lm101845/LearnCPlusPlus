//2023年2月4日10:57:13

/**
* C++中的引用是一种特殊的指针，它指向另一个变量，但不能改变指向的内容。
引用和指针的最大区别在于，引用只能指向一个变量，而指针可以指向多个变量。
引用比指针更安全，因为它只能指向一个变量，并且只能读取它指向的变量，
而不能修改它指向的变量。
引用的本质其实是一个指针变量，而且是一个常量指针
*/
#include <iostream>
using namespace std;

void my_swap1(int a, int b)
{
	//单向传递是值传递，函数内部不能修改外部的值
	//值传递只是交换实参的拷贝(实参的值拷贝给了形参a,b。形参a,b确实被交换了)，实参本身(data1,data2)并没有被交换
	int tmp = a;
	a = b;
	b = tmp;
	//tmp,a,b都是局部变量，函数执行完就销毁了
}

void my_swap2(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void my_swap3(int &a,int &b)  //取别名，a是data1的别名，b是data2的别名
//问：为什么&a是int类型，而不是指针类型呢

//答：传递引用的意义在于让函数能够直接修改实参的值，
//而指针则是把实参的地址传给函数，函数再去读取这个地址中的值。
//引用不是单纯的赋值，而是取别名
{
	int tmp = a;
	a = b;
	b = tmp;
}

void test01()
{
	int data1 = 10, data2 = 20;
	cout << "data1=" << data1 << ",data2=" << data2 << endl;
	//my_swap1(data1, data2);  //交换失败(函数内部只是形参的交换，外部变量并没有交换)
	//data1,data2只是把值赋给了a,b，函数内部的交换只是对a,b的交换
	//a,b可以交换成功，但是与上面的data1,data2没有半毛钱关系

	//my_swap2(&data1, &data2);  //交换成功

	my_swap3(data1, data2);  //交换成功(推荐)
	//my_swap3(&data1, &data2);  //注意：不能取地址，会报错，这里取的是别名
	//函数调用的时候，传递的实参不必加"&"符，加了报错
	cout << "data1=" << data1 << ",data2=" << data2 << endl;
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
