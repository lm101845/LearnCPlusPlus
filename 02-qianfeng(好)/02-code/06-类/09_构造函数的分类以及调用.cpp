//2023��4��25��15:04:23

#include <iostream>
using namespace std;

class Date
{
public:
	int num;
public:
	Date()
	{
		num = 0;
		cout << "�޲εĹ��캯��--" << num <<endl;
	}

	Date(int n)
	{
		num = n;
		cout << "�вεĹ��캯��--" << num << endl;
	}

	~Date()
	{
		cout << "��������" << num << endl;
	}
};

void test01()
{
	//�����޲λ�Ĭ�Ϲ���(��ʽ���ù��캯��)
	Date ob;
	cout << "=============" << endl;

	//�����޲ι���(��ʽ���ã�
	Date ob2 = Date();
	cout << "=============" << endl;

	//�����вι���(��ʽ����)
	Date ob3(10);
	cout << "=============" << endl;

	//�����йع���(��ʽ����)
	Date ob4 = Date(20);
	cout << "=============" << endl;

	//��ʽת���ķ�ʽ�����вι���(���ֻ��һ�����ݳ�Ա)
	Date ob5 = 30;    //��ת����Date ob5(30)�����������ã��������
	cout << "=============" << endl;

	//��������(������ڶ̣���ǰ���������������������ͷ�)
	Date(40);
	cout << "=======��������======" << endl;

}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
