//2023年2月11日10:01:48

#include <iostream>
using namespace std;
//注意：
//函数的返回值类型 不能作为 函数重载的依据。
//函数重载和默认参数一起使用，需要额外注意二义性问题的产生

void myFunc02(int a)
{
	cout << "int的myFunc02" << endl;
}
void myFunc02(int a, int b = 10)//默认参数
{
	cout << "int,int 的myFunc02" << endl;
}

void test01()
{
	//myFunc02(int a) 和 myFunc02(int a,int b=10)都能识别
	//myFunc02(10);//二义性产生
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
