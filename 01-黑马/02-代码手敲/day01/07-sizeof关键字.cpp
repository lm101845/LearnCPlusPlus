/*************************************************************************************
 * �� �� ��:   07-sizeof�ؼ���.cpp
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2021/7/17 22:35
*************************************************************************************/


#include<iostream>
using namespace std;

int main() {
	//���ͣ�short(2) int(4) long(4-windows��) long long(8)
	//��������sizeof�����������ռ�õ��ڴ��С
	//�﷨��sizeof(��������/����)
	short num1 = 10;
	//cout << "shortռ�õ��ڴ�ռ�Ϊ��" << sizeof(short) << endl;  //2
	cout << "shortռ�õ��ڴ�ռ�Ϊ��" << sizeof(num1) << endl;  //2
	//дshort����num1������

	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ��" << sizeof(num2) << endl;  //2

	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ�Ϊ��" << sizeof(num3) << endl;  //4

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ�Ϊ��"<<sizeof(num4) << endl;  //8

	//���ʹ�С�Ƚ�
	//short < int <= long < long long  
	system("pause");
	return 0;
}
