//2023年2月11日10:17:15

#include <iostream>
#include"fun.h"
using namespace std;

//芯片厂商提供的库大部分是C语言的，但是项目用C++写的
void test01()
{
	cout << my_add(100, 200) << endl;
	cout << my_sub(100, 200) << endl;
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
