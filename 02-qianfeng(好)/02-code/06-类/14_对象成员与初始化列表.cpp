//2023��4��30��17:58:20

#include <iostream>
using namespace std;

class A
{
private:
	int m_a;
public:
	A()
	{
		cout << "A�޲ι��캯��" << endl;
	}
	A(int a)
	{
		m_a = a;
		cout << "A�вι��캯��" << endl;
	}
	~A()
	{
		cout << "A��������" << endl;
	}
};


class B
{
private:
	int m_b;
public:
	B()
	{
		cout << "B�޲ι��캯��" << endl;
	}
	B(int b)
	{
		m_b = b;
		cout << "B�вι��캯��" << endl;
	}
	~B()
	{
		cout << "B��������" << endl;
	}
};

class Data
{
private:
	A oba;   //�����Ա
	B obb;   //�����Ա
	int data;   //�������ͳ�Ա
public:
	Data()
	{
		cout << "Data���޲ι���" << endl;
	}

	Data(int a,int b,int c):oba(a),obb(b),data(c)
	{
		//oba.m_a = a;
		//oba.m_b = b;
		//�޷�����д��˽�����ԣ��޷�����
		//��ʱֻ��ʹ�ó�ʼ���б�����ʽ���ö����Ա�Ĺ��캯��
		//������Data�Ĺ��캯��,ʹ�ó�ʼ���б�,ʹ������Ա�����вι���
		//data = c;
		cout << "Data���вι���" << endl;
	}

	~Data()
	{
		cout << "Data����������" << endl;
	}
};

void test01()
{
	//ϵͳ�����Data���޲ι���(֮ǰҪ��֤�Ӷ���Ĺ��캯���ȵ���)
	//�ȵ��ö����Ա�Ĺ��캯������>�Լ��Ĺ��캯������>�����Լ�����>���������Ա 
	//Data ob1;

	//ϵͳĬ�ϵ��õ��Ƕ����Ա���޲ι���
	Data ob2(10,20,30);
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
