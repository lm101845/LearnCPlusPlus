//2024��11��25��11:55:14

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//���õı��ʣ��������𡾱�����
// �﷨�� ��������(Ҫ��ԭ����������һ��) &���� = ԭ��
//����������



int main()
{
	int a = 10;
	int& b = a;   //��ʱa,b�ȼ�,��ʱb���µġ������������������µġ�ָ�롿����
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	b = 20;  //ע�⣬������b=20,������*b=20
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("PAUSE");
}
