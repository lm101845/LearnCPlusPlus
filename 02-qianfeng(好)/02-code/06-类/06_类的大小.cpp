//2023��4��25��13:58:35

#include <iostream>
using namespace std;

class Date
{
private:
	//��Ա����ռ����Ĵ�С
	int num;
public:
	//��Ա������ռ��Ŀռ��С
	//������������ڴ�����
	void setNum(int data)
	{
		num = data;
	}
	int getNum(void)
	{
		return num;
	}
};


void test01()
{
	printf("%d\n", sizeof(Date));   //������Ĵ�С��4B
}
int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
