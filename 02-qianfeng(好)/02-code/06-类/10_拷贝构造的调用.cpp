//2023年4月27日21:06:42

/**
*拷贝构造函数是一种特殊的构造函数，它用于创建一个对象，该对象是已有对象的副本。
拷贝构造函数通常采用引用参数，以便在创建新对象时使用已有对象的值。在C++中，
如果没有定义自己的拷贝构造函数，则编译器会自动生成一个默认的拷贝构造函数。
拷贝构造函数通常用于复制对象，以便在函数传递和返回值时避免不必要的拷贝和内存分配。

记住一句话：旧对象初始化新对象，只有这样才会调用拷贝构造函数
* 
*/
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
		cout << "无参的构造函数--" << num << endl;
	}

	Date(int n)
	{
		num = n;
		cout << "有参的构造函数--" << num << endl;
	}

	//拷贝构造函数
	Date(const Date& ob)   //自身对象的常引用
	{
		num = ob.num * 10;
		cout << "拷贝构造函数" << ob.num << endl;
		//此时拷贝构造函数是ob2调用的,num就是ob2的num
	}

	~Date()
	{
		cout << "析构函数" << num << endl;
	}
};

void test01()
{
	Date ob1(10);
	cout << "ob1.num" << ob1.num << endl;

	//此时就会调用拷贝构造函数
	//如果用户不实现拷贝构造，系统将调用默认的拷贝构造
	//默认的拷贝构造：单纯的整体赋值(浅拷贝)
	//如果用户实现了拷贝构造，系统将调用用户实现的拷贝构造
	//如果没有赋值关系，此时局部对象的成员就是随机的


	Date ob2(ob1);   //隐式调用拷贝构造函数
	cout << "ob2.num" << ob2.num << endl;

	Date ob3 = Date(ob1);  //显式调用拷贝构造函数
	cout << "ob3.num" << ob3.num << endl;

	Date ob4 = ob1;     //等号隐式转换
	cout << "ob4.num" << ob4.num << endl;
}


void test02()
{
	Date ob1(10);   //调用有参构造(旧对象)
	Date ob2;  //调用无参构造(也是旧对象)
	ob2 = ob1;  //对象的赋值
	cout << "ob1.num---" << ob1.num << endl;
	cout << "ob2.num---" << ob2.num << endl;

}
int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
