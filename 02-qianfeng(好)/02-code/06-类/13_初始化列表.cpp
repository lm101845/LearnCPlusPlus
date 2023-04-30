//2023年4月30日17:38:14 

#include <iostream>
using namespace std;

class Data
{
private:
	int m_a;
	int m_b;
	int m_c;
public:
	//写法1：
	//Data(int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//	cout << "有参构造" << endl;
	//}

	//写法2：
	//成员名(形参名)
	//注意：初始化列表(参数列表)只能在构造函数中使用
	Data(int a, int b, int c):m_a(a),m_b(b),m_c(c)
	{
		cout << "有参构造1" << endl;
	}
	~Data()
	{
		cout << "析构函数" << endl;
	}
	void showData(void)
	{
		cout << m_a<<" "<<m_b<<" " <<m_c<< " " << endl;
	}

};


void test01()
{
	Data ob(10, 20, 30);
	ob.showData();
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
