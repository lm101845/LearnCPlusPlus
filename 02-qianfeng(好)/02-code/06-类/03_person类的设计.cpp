//2023年2月16日19:04:27

#include <iostream>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//注意：定义类的时候，不要给成员初始化
//因为类是一个抽象的概念，它有大小，但是不分配空间
//没有空间，你又如何给它赋值呢？
class Person
{
private:
	char m_name[32];
	int m_age;
public:
	//初始化函数
	void initPerson(const char* name, int age)
	{
		strcpy_s(m_name, name);
		m_age = age;
	}
	//提供get,set函数
	//对成员变量m_name进行写操作
	void setName(char* name)
	{
		strcpy_s(m_name, name);
	}
	//对成员变量m_name进行读操作
	char* getName(void)
	{
		return m_name;
	}

	//对成员变量age进行写操作
	void setAge(int age)
	{
		if (age > 0 && age < 100)
			m_age = age;
		else
			cout << "age赋值无效" << endl;
	}
	//对成员变量age进行读操作
	int getAge(void)
	{
		return m_age;
	}

	void showPerson(void)
	{
		cout << "姓名：" << m_name << ", 年龄: " << m_age << endl;
	}
};

int main(int argc, char* argv[])
{
	//test01();
	//通过类 实例化 一个对象（用Person定义一个变量）
	Person lucy;  //Person是类名称 抽象的  lucy是一个对象 实例（实际存在）
	//对象 只能借助 公有方法 操作私有数据
	//初始化
	lucy.initPerson("lucy",18);
	//获取姓名
	cout << "姓名:" << lucy.getName() << endl;
	//获取年龄
	cout << "年龄:" << lucy.getAge() << endl;
	
	//更改 年龄
	lucy.setAge(200);
	lucy.setAge(28);

	//遍历lucy的信息
	lucy.showPerson();

	system("PAUSE");
}