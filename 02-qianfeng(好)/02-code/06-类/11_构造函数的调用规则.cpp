//2023��4��30��14:29:05

#include <iostream>
using namespace std;

class Data
{
public:
	int num;
public:
	//1.����û��ṩ���вι��죬�����Զ�����ϵͳ�ṩ���޲ι���
	//2.����û��ṩ���вι��죬��������ϵͳ�ṩ�Ŀ������캯��
	//3.����û��ṩ�˿������죬��������ϵͳ�ṩ��Ĭ�Ϲ��캯����Ĭ�Ͽ������캯��

	//�ܽ᣺���ڹ��캯�����û�һ��Ҫʵ�֣��޲ι��졢�вι��졢�������졢����
	Data(int n)
	{
		num = n;
		cout << "�вεĹ��캯��+++++" << num << endl;
	}

	Data(const Data& ob)
	{
		cout << "�������캯��&&&&&&&" << endl;
	}

	~Data()
	{
		cout << "��������******" << num << endl;
	}

	
};


void test01()
{
	//�����޲ι���
	//Data ob1;
	Data ob1(430);
	Data ob2 = ob1;
	cout << "ob2.mum=" <<ob2.num << endl;
}

void test02()
{

	//Data ob1;
	Data ob1(501);
	Data ob2 = ob1;
	cout << "ob2.mum=" << ob2.num << endl;
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
