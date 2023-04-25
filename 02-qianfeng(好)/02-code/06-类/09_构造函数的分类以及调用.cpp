//2023年4月25日15:04:23

#include <iostream>
using namespace std;

class Date
{
public:
	int num;
public:
	Date()
	{
		num = 0;
		cout << "无参的构造函数--" << num <<endl;
	}

	Date(int n)
	{
		num = n;
		cout << "有参的构造函数--" << num << endl;
	}

	~Date()
	{
		cout << "析构函数" << num << endl;
	}
};

void test01()
{
	//调用无参或默认构造(隐式调用构造函数)
	Date ob;
	cout << "=============" << endl;

	//调用无参构造(显式调用）
	Date ob2 = Date();
	cout << "=============" << endl;

	//调用有参构造(隐式调用)
	Date ob3(10);
	cout << "=============" << endl;

	//调用有关构造(显式调用)
	Date ob4 = Date(20);
	cout << "=============" << endl;

	//隐式转换的方式调用有参构造(针对只有一个数据成员)
	Date ob5 = 30;    //会转换成Date ob5(30)——尽量别用，容易误会
	cout << "=============" << endl;

	//匿名对象(存活周期短，当前语句结束，匿名对象立即释放)
	Date(40);
	cout << "=======匿名对象======" << endl;

}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
