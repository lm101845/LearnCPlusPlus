//2023��2��10��16:36:22

#include <iostream>
using namespace std;

//������Ĭ�ϲ��� ָ��x��Ĭ��ֵΪ10 yΪ20
int my_add(int x = 10, int y = 20)
{
	return x + y;
}

inline int my_mul(int x, int y)
{
	return x * y;
}

//������Ĭ�ϲ�����������(����ĸ�λ��������Ĭ�ϲ�������������������������ȫҪ��Ĭ�ϲ���)
int func01(int x, int y = 20, int z = 30)
{
	return x + y + z;
}

void test01()
{
	//����������� ��ô���Ե�Ĭ�ϲ�������Ч
	cout << "my_add = " << my_add(100, 200) << endl;//300

	//���ĳ������δ������ ������Ĭ��ֵx=100 yʹ��Ĭ��ֵ20
	cout << "my_add = " << my_add(100) << endl;//120

	//x=10  y=20
	cout << "my_add = " << my_add() << endl;//30
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
