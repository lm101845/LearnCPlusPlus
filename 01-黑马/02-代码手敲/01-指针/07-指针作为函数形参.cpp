//2024��11��13��11:41:34

//ֵ����ʱ���βθı䲻��ʵ��
//������ָ�������������������޸�ʵ�ε�ֵ

//�ܽ᣺��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//1.ֵ����
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1a = " << a << endl; //������������β��ǻ���
	cout << "swap1b = " << b << endl; //������������β��ǻ���
}

//2.��ַ����
void swap2(int* p1, int* p2) 
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	/**
	*����a�����������ƣ�����洢���ڴ��У�������a��ָ����ڴ��ַ��洢�ڷ��ű�symbol table���У�
	*���Ǳ������ڱ�����������ڹ���͸��ٱ�ʶ��������������������ȣ���һ�����ݽṹ��
	* 
	*/
	int a = 10;   
	int b = 20;   
	swap1(a, b); // ֵ���ݲ���ı�(����)ʵ��
	cout << "a = " << a << endl; //�����

	cout << "b = " << b << endl; //�����

	int c = 30;
	int d = 40;    
	swap2(&c, &d); // ���ô��ݻ�ı�(����)ʵ��
	cout << "c = " << c << endl; //���

	cout << "d = " << d << endl; //���
	system("PAUSE");
}
