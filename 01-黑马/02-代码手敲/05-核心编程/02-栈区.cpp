//2024��11��21��11:55:52

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//�ɱ������Զ������ͷ�, ��ź����Ĳ���ֵ, �ֲ�������
//ע�������Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷ�

int* func(int b) {  //�β�����Ҳ�����ջ��
	int a = 10;   //�ֲ�����,�����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;
}

int main()
{
	int* p = func(1);
	cout << *p << endl;
	cout << *p << endl;
	//����Ӧ�ò���10�ˣ�����Ŀǰ�����������Ż��ˣ����Ի���10
	system("PAUSE");
}
