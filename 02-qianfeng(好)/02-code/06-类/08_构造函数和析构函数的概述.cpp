//2023��4��25��14:29:17

#include <iostream>
using namespace std;

class Date 
{
public:
	int num;
public:
	//���캯��(�޲εĹ���)
	Date()
	{
		num = 0;
		cout << "�޲εĹ��캯��" << endl;
	}

	//���캯����������
	Date(int n)
	{
		num = n;
		cout << "�вεĹ��캯��" << endl;
	}

	//��������(��ɨβ����,��������)
	//��������������void,Ҳ�����в���(��Ϊ����ɨβ������)
	~Date()
	{
		cout << "��������" << endl;
	}
};
void test01()
{
	//��ʵ��������ϵͳ�Զ����ù��캯��
	Date ob;
	//����������ʱ�򣬾ֲ�����ob���ͷţ�ϵͳ�Զ�������������
}

int main(int argc, char* argv[])
{
	cout << "=====001======" << endl;
	test01();
	cout << "=====002======" << endl;
	system("PAUSE");
}
