//2024��11��21��12:02:28

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int* func() {
	//����new�ؼ��֣����Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�����ָ�뱣��������Ƿ��ڶ�����
	//�β�p�Ǳ��ͷ��ˣ����ǲ���Ӱ��ʵ��p,ʵ��pָ��ĵ�ַһֱû�䣬�õ�ַ
	//�洢������Ҳ�ڶ������������ݲ����
	int *a = new int(10);
	return a;
}

int main()
{
	//�ڶ��Ͽ�������
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	system("PAUSE");
}
