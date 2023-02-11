//2023年2月11日09:28:59
#include <iostream>
using namespace std;
/**
*函数的参数只有类型名  没有形参名，这个参数就是占位参数
由于有类型名 所以 函数调用的时候 必须给占位参数传参。
由于没有形参名 所以 函数内部 是无法使用占位参数。
*/
void func(int x, int y, int)
{
	cout << "x = " << x << ", y = " << y << endl;
	return;
}

void test01()
{
	//func(10,30,"hehe");//err "hehe"和int类型不符
	func(10, 30, 40);
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
