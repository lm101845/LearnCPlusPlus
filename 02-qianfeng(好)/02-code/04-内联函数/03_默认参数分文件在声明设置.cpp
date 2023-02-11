//2023年2月11日09:08:01

#include <iostream>
using namespace std;
//分文件 函数【定义处】的默认参数 是无效的
//建议:分文件是在【声明处】给默认参数
extern int func02(int x, int y = 20, int z = 30);  //函数声明
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
