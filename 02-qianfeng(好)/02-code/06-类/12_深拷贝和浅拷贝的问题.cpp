//2023��4��30��16:50:24
#pragma warning(disable:4996)
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Person
{
private:
	//char name[32];   //һ�㲻������棬��������ڴ��˷�
	char *m_name;   //һ�㶼��ָ���
	int m_num;
public:
	Person()
	{
		m_name = NULL;
		m_num = 0;
		//��Ȼ���޲Σ�����Ҫִ��һ�³�ʼ������
		cout << "�޲ι���" << endl;
	}
	Person(const char* name, int num)
	{
		//Ϊm_name����ռ�
		m_name = (char*)calloc(1,strlen(name) + 1);  //����Ļ��������'\0',����Ҫ������1
		//C����������ռ���ܻ�ʧ�ܣ�����Ҫ�ж�һ��
		if (m_name == NULL)
		{
			cout << "����ʧ��" << endl;
		}
		cout << "�Ѿ�����ÿռ�,ֻ������һ��" << endl;
		strcpy(m_name, name);
		m_num = num;
		cout << "�вι���" << endl;

	}

	Person(const Person& ob)   //ob===>lucy
	{
		cout << "�������캯��" << endl;
		m_name = (char*)calloc(1, strlen(ob.m_name) + 1);
		cout << "�ռ��ѱ�����" << endl;
		strcpy(m_name, ob.m_name);
		m_num = ob.m_num;
	}

	~Person()
	{
		if (m_name != NULL)
			cout << "�ռ��ѱ��ͷ�,���ܻ��ͷŶ��,����������Ҫ�ÿ�������" << endl;
		{
			free(m_name);
			m_name = NULL;
		}
		cout << "��������" << endl;
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

	//ǳ����������
	Person bob = lucy;   //����ϵͳĬ�Ͽ�������(������ֵ����)
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
