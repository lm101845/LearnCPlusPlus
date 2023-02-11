//2023年2月11日12:37:16

#include <iostream>
using namespace std;

//在类的内部 没有权限之分 都可以相互访问
class Person  //类是一个抽象的概念，它有大小，但是不分配空间
{  //类的外部
private:
	int m_money;  //私有数据,类的外部不可访问
protected:
	int m_age;  
public:
	void dese()
	{
		m_money = 100;
		m_age = 18;
		//虽然你是私有保护的，但是在类内部是没有权限这个概念的，我是可以进行赋值的
		cout << "我有房 有车 又年轻" << m_age << "岁又有钱" << m_money << "万美金 我就爱嘚瑟" << endl;
	}
};

void test01()
{
	//用类 去 实例化 一个对象（就是用Person定义一个变量）
	Person lucy;
	//lucy.m_money = 200;   //err 类的外部不可以访问
	
	//cout<<"妹妹你的钱:"<<lucy.m_money<<endl;//err 内的外部不可访问
	//cout<<"妹妹你的年龄:"<<lucy.m_age<<endl;//err 内的外部不可访问

	lucy.dese();  //ok 公有的类的外部可用访问
	//private protected虽然是私有、保护的 类外不可访问 但是用户可以借助 public公有的方法
	//间接的访问私有、保护的数据
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
