//2024��11��25��11:44:23

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int* func() {
	//�ڶ�������һ����������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

//1.new�Ļ����﷨
void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����٣��ɳ���Ա�����ͷ�
	delete p;
	//cout << *p << endl;  
	//�������쳣: ��ȡ����Ȩ�޳�ͻ
	//��ʱ�ڴ��Ѿ��ͷţ��ڴ˷��ʼ�Ϊ�Ƿ��������ᱨ��

}

//2.�ڶ�������new��������
void test02() {
	//�ڶ�������10�������ݵ�����
	int* arr = new int[10]; //10����������10��Ԫ�� 	//�����������׵�ַ

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ���������
	//ע�⣺�ͷ������ʱ��Ҫ�ӡ�[]���ſ���
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("PAUSE");
}
