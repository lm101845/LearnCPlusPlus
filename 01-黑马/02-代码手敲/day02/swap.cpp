//2024��11��12��08:29:57
//swap.cpp�ļ�
//˫���Ŵ����Զ���ͷ�ļ�
#include "swap.h"

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}