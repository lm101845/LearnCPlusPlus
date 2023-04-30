//2023年4月30日17:58:20

#include <iostream>
using namespace std;

class A
{
private:
	int m_a;
public:
	A()
	{
		cout << "A无参构造函数" << endl;
	}
	A(int a)
	{
		m_a = a;
		cout << "A有参构造函数" << endl;
	}
	~A()
	{
		cout << "A析构函数" << endl;
	}
};


class B
{
private:
	int m_b;
public:
	B()
	{
		cout << "B无参构造函数" << endl;
	}
	B(int b)
	{
		m_b = b;
		cout << "B有参构造函数" << endl;
	}
	~B()
	{
		cout << "B析构函数" << endl;
	}
};

class Data
{
private:
	A oba;   //对象成员
	B obb;   //对象成员
	int data;   //基本类型成员
public:
	Data()
	{
		cout << "Data的无参构造" << endl;
	}

	Data(int a,int b,int c):oba(a),obb(b),data(c)
	{
		//oba.m_a = a;
		//oba.m_b = b;
		//无法这样写，私有属性，无法访问
		//此时只能使用初始化列表来显式调用对象成员的构造函数
		//必须在Data的构造函数,使用初始化列表,使其对象成员调用有参构造
		//data = c;
		cout << "Data的有参构造" << endl;
	}

	~Data()
	{
		cout << "Data的析构函数" << endl;
	}
};

void test01()
{
	//系统会调用Data的无参构造(之前要保证子对象的构造函数先调用)
	//先调用对象成员的构造函数——>自己的构造函数——>析构自己——>析构对象成员 
	//Data ob1;

	//系统默认调用的是对象成员的无参构造
	Data ob2(10,20,30);
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
