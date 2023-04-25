//2023年4月25日14:11:04
#include <iostream>
using namespace std;

class Date
{
private:
	int num;
public:
	//成员函数在类内声明，在类外定义
	void setNum(int data);
	int getNum(void);
};

//这样写就是普通的全局函数,无法体现这个函数是这个类的
//void setNum(int data)
//{
//	num = data;
//}


//加作用域才说明这个函数是属于这个Date类的
void Date::setNum(int data)
{
	num = data;
}

int Date::getNum()
{
	return num;
}

void test01()
{
	printf("%d\n", sizeof(Date));   
	Date ob;
	ob.setNum(100);
	cout << "num=" << ob.getNum() << endl;
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
