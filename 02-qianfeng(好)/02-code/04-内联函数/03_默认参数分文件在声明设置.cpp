//2023��2��11��09:08:01

#include <iostream>
using namespace std;
//���ļ� ���������崦����Ĭ�ϲ��� ����Ч��
//����:���ļ����ڡ�����������Ĭ�ϲ���
extern int func02(int x, int y = 20, int z = 30);  //��������
void test01()
{
	cout << func02(100, 200) << endl;//330
	cout << func02(100) << endl;//150
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
