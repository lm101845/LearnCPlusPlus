//2023��4��25��14:11:04
#include <iostream>
using namespace std;

class Date
{
private:
	int num;
public:
	//��Ա���������������������ⶨ��
	void setNum(int data);
	int getNum(void);
};

//����д������ͨ��ȫ�ֺ���,�޷��������������������
//void setNum(int data)
//{
//	num = data;
//}


//���������˵������������������Date���
void Date::setNum(int data)
{
	num = data;
}

int Date::getNum()
{
	return num;
}

void test01()
{
	printf("%d\n", sizeof(Date));   
	Date ob;
	ob.setNum(100);
	cout << "num=" << ob.getNum() << endl;
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
