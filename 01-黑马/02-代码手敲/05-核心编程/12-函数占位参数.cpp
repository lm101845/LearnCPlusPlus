//2024��11��29��11:45:25

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//���ֽ׶κ�����ռλ�����������岻�󣬵��Ǻ���Ŀγ��л��õ��ü���
//����ռλ���� ��ռλ����Ҳ������Ĭ�ϲ���
void func(int a, int) {
//void func(int a, int = 10) {
	cout << "this is func" << endl;
}

int main()
{
	func(10, 10); //ռλ���������
	system("PAUSE");
}
