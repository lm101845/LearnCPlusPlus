//2024��11��25��12:04:10

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//1.���ñ���Ҫ��ʼ��
//2.���ó�ʼ���Ժ�Ͳ������޸���


int main()
{
	int a = 10;
	//int &b; //�������ñ����ʼ��
	int& b = a; //һ����ʼ���󣬾Ͳ����Ը���

	int c = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	b = c; 
	//bԭ����a�ı�����������ĳ�c�ı����ˣ��������
	//����b = c����Ǹ�ֵ�����������Ǹ������ã�����ǿ��Ե�
	//b = c�ĺ����ǰ�c���20���ݸ�ֵ��bָ����ڴ�(b��a����ָ���ͬһ���ڴ�)
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	//int &b = c;  //��������޸�b�ı���������ǲ������
	////����b�ض��壬��γ�ʼ��
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	system("PAUSE");
}
