//2024��11��26��11:56:09

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//��ӡ���ݺ���
void showValue(const int& val) {   //��const��Ϊ�˷�ֹ��������޸����β�(��ʵ��)
//void showValue(int &val) {
	//val = 1000;  //��ʱ�����aҲ���1000�ˣ���������������޸���
	cout << val << endl;
}

int main()
{
	//��������
	//ʹ�ó��������������βΣ���ֹ�����
	int a = 10;
	//int& ref = 10;   //���ñ�����һ��Ϸ����ڴ�ռ䣬���10��һ��������������ֱ����

	//����const֮�󣬱������������޸� int temp = 10; const in &ref = temp;(ԭ���������������һ��)

	const int& ref = 10;
	//ref = 20;   //����const֮�󣬱����ֻ�����������޸�

	showValue(a);
	system("PAUSE");
}
