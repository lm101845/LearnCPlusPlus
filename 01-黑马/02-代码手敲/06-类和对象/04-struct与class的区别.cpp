//2024��12��3��11:40:17

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//-struct Ĭ��Ȩ��Ϊ����
//-class   Ĭ��Ȩ��Ϊ˽��

class C1 {
//private:
	int m_A;   //Ĭ����˽��Ȩ��
};

struct C2
{
	int m_A;  //Ĭ���ǹ���Ȩ��
};
int main()
{
	C1 c1;
	//c1.m_A = 10; //���󣬷���Ȩ����˽��

	C2 c2;
	c2.m_A = 10; //��ȷ������Ȩ���ǹ���
	system("PAUSE");
}
