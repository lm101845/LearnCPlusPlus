//2023年4月30日16:50:24
#pragma warning(disable:4996)
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Person
{
private:
	//char name[32];   //一般不用数组存，容易造成内存浪费
	char *m_name;   //一般都用指针存
	int m_num;
public:
	Person()
	{
		m_name = NULL;
		m_num = 0;
		//虽然是无参，还是要执行一下初始化动作
		cout << "无参构造" << endl;
	}
	Person(const char* name, int num)
	{
		//为m_name申请空间
		m_name = (char*)calloc(1,strlen(name) + 1);  //申请的话不会包括'\0',所以要单独加1
		//C语言中申请空间可能会失败，所以要判断一下
		if (m_name == NULL)
		{
			cout << "构造失败" << endl;
		}
		cout << "已经申请好空间,只会申请一次" << endl;
		strcpy(m_name, name);
		m_num = num;
		cout << "有参构造" << endl;

	}

	Person(const Person& ob)   //ob===>lucy
	{
		cout << "拷贝构造函数" << endl;
		m_name = (char*)calloc(1, strlen(ob.m_name) + 1);
		cout << "空间已被申请" << endl;
		strcpy(m_name, ob.m_name);
		m_num = ob.m_num;
	}

	~Person()
	{
		if (m_name != NULL)
			cout << "空间已被释放,可能会释放多次,所以我们需要用拷贝构造" << endl;
		{
			free(m_name);
			m_name = NULL;
		}
		cout << "析构函数" << endl;
	}

	void showPerson(void)
	{
		cout << "m_name=" << m_name << ",m_num=" << m_num << endl;
	}
};

void test01()
{
	Person lucy("lucy",100);
	lucy.showPerson();

	//浅拷贝的问题
	Person bob = lucy;   //调用系统默认拷贝构造(单纯的值拷贝)
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
