//2024��11��12��12:17:43

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//��32λ������ϵͳ�£�������ʲô���͵�ָ�룬��ռ4���ֽڿռ�
//��64λ������ϵͳ�£�������ʲô���͵�ָ�룬��ռ8���ֽڿռ�
int main()
{
	//ָ����ռ���ڴ�ռ�
	int a = 10;
	// д��1��
	//int* p;
	//p = &a;

	//д��2�����д��
	int* p = &a;

	//int*��p���У���Ϊp����int*���͵�
	cout << "size of (int*)" << sizeof(int*) << endl;
	cout << "size of (p)" << sizeof(p)<<endl;
	cout << "size of (float*)" << sizeof(float*) << endl;
	cout << "size of (double*)" << sizeof(double*) << endl;
	cout << "size of (char*)" << sizeof(char*) << endl;
	system("PAUSE");
}
