//2024��11��26��12:08:35

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int func(int a, int b = 10, int c = 20) {
	return a + b + c;
}

//1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
int func2(int a = 10, int b = 10);   //��������
int func2(int a = 20, int b = 20) {  //ʵ��Ҳ����Ĭ��ֵ����ô�������Ͳ�֪����˭����
	return a + b;
}

int main()
{
	cout << "ret = " << func(10,20, 30) << endl;
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	system("PAUSE");
}
