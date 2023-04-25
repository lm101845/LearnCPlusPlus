//2023年4月25日13:58:35

#include <iostream>
using namespace std;

class Date
{
private:
	//成员数据占用类的大小
	int num;
public:
	//成员函数不占类的空间大小
	//函数单独存放在代码区
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
	printf("%d\n", sizeof(Date));   //测量类的大小：4B
}
int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
