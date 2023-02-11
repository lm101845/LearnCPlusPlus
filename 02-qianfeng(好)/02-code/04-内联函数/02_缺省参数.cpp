//2023年2月10日16:36:22

#include <iostream>
using namespace std;

//函数的默认参数 指定x的默认值为10 y为20
int my_add(int x = 10, int y = 20)
{
	return x + y;
}

inline int my_mul(int x, int y)
{
	return x * y;
}

//函数的默认参数从左向右(你从哪个位置设置了默认参数，这个参数后面参数都必须全要是默认参数)
int func01(int x, int y = 20, int z = 30)
{
	return x + y + z;
}

void test01()
{
	//如果函数传参 那么各自的默认参数将无效
	cout << "my_add = " << my_add(100, 200) << endl;//300

	//如果某个参数未被传参 将启用默认值x=100 y使用默认值20
	cout << "my_add = " << my_add(100) << endl;//120

	//x=10  y=20
	cout << "my_add = " << my_add() << endl;//30
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
