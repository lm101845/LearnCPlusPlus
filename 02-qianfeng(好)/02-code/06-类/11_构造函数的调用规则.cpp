//2023年4月30日14:29:05

#include <iostream>
using namespace std;

class Data
{
public:
	int num;
public:
	//1.如果用户提供了有参构造，它会自动屏蔽系统提供的无参构造
	//2.如果用户提供了有参构造，不会屏蔽系统提供的拷贝构造函数
	//3.如果用户提供了拷贝构造，它会屏蔽系统提供的默认构造函数和默认拷贝构造函数

	//总结：对于构造函数，用户一般要实现：无参构造、有参构造、拷贝构造、析构
	Data(int n)
	{
		num = n;
		cout << "有参的构造函数+++++" << num << endl;
	}

	Data(const Data& ob)
	{
		cout << "拷贝构造函数&&&&&&&" << endl;
	}

	~Data()
	{
		cout << "析构函数******" << num << endl;
	}

	
};


void test01()
{
	//调用无参构造
	//Data ob1;
	Data ob1(430);
	Data ob2 = ob1;
	cout << "ob2.mum=" <<ob2.num << endl;
}

void test02()
{

	//Data ob1;
	Data ob1(501);
	Data ob2 = ob1;
	cout << "ob2.mum=" << ob2.num << endl;
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
