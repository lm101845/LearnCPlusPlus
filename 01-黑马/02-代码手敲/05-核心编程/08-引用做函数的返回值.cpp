//2024��11��26��08:07:45

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//�����ķ���ֵ����Ҳ������һ������
//ע�����
//1.��Ҫ���ؾֲ�������Ӧ��
int& test01() {
	int a = 10;    //�ֲ���������������е�ջ��
	return a;
	//ref����a��a�ı�������ref
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02() {
	static int a = 10;  //��̬����-�����ȫ��������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}
int main()
{
	//���ܷ��ؾֲ�����������
	//int& ref = test01();
	//cout << "ref = " << ref << endl; //��һ�ν����ȷ����Ϊ���������˱���(������Ҳ����)
	//cout << "ref = " << ref << endl; //�ڶ��ν��������Ϊa���ڴ��Ѿ����ͷ�

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;  //���������ڵȺ���ߣ���Ϊ��ֵ test02()���صľ��Ǳ���ref2

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	system("PAUSE");
}
