//2024��12��2��11:42:37

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ�� 2 * PI * �뾶
const double PI = 3.14;

//class�������һ���࣬���������ŵľ���������
class Circle {
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��Բ�ഴ��һ�������Բ(����)
	//ʵ���� (ͨ��һ���࣬����һ������Ĺ���)
	Circle c1;
	//��Բ��������Խ��и���
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;
	system("PAUSE");
}
