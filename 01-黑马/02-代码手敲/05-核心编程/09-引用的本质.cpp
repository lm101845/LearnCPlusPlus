//2024��11��26��08:20:05

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//���õı�����c++�ڲ�ʵ����һ��ָ�볣��(ָ���ǳ���,��ַ�����Ա䣬��ֵ���Ա�)
//���������ã�ת��Ϊ int* const ref = &a;
void func(int& ref) {
	ref = 100; // ref�����ã�ת��Ϊ*ref = 100
}

int main()
{
	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	system("PAUSE");
}
