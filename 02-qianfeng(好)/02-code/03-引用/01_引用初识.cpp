//2022年12月25日12:26:54
#include <iostream>
using namespace std;

void test01()
{
	int num = 10;
	int& a = num;
	//给num取个别名叫a,此时a完全等价于num，a就是num的一个分身
	//取别名不会给变量开辟空间的
	//引用必须初始化(不然我怎么知道我给哪个变量创建分身呢)
	//引用一旦初始化 就不能再次修改别名(从一而终)
	cout << "num=" << num << endl;
	//对a赋值<===>对num赋值
	a = 100;
	cout << "num=" << num << endl;

	//a是num的别名，所以num和a具有相同的地址空间
	cout << "a的地址：" << &a << endl; 
	cout << "num的地址：" <<&num << endl;


	//int data = 20;
	//a = data;
	//不是data别名为a 而是将data值赋值a(num)
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}