//2023年4月25日14:29:17

#include <iostream>
using namespace std;

class Date 
{
public:
	int num;
public:
	//构造函数(无参的构造)
	Date()
	{
		num = 0;
		cout << "无参的构造函数" << endl;
	}

	//构造函数可以重载
	Date(int n)
	{
		num = n;
		cout << "有参的构造函数" << endl;
	}

	//析构函数(做扫尾工作,临终遗言)
	//析构函数不能有void,也不能有参数(因为都做扫尾工作了)
	~Date()
	{
		cout << "析构函数" << endl;
	}
};
void test01()
{
	//类实例化对象，系统自动调用构造函数
	Date ob;
	//函数结束的时候，局部对象ob被释放，系统自动调用析构函数
}

int main(int argc, char* argv[])
{
	cout << "=====001======" << endl;
	test01();
	cout << "=====002======" << endl;
	system("PAUSE");
}
