//2023年2月4日11:23:53

#include <iostream>
using namespace std;

//引用作为函数的返回值类型
int& my_data(void)
{

	int num = 100;
	return num;
	//注意：函数的返回值为引用的时候，千万不要返回局部变量！！
	//因为函数执行完之后就结束了，到时候别名指向的就是一个被释放空间的地址了！！！
	//不管怎么做，只要保证它不释放就OK了
}

int& my_data2(void)
{
	static int num = 100;
	return num;
	//这是写是可以的！！
}
void test01()
{

	//这样写不行！因为引用必须要在初始化的时候进行定义
	//int& ret;
	//ret = my_data();

	//ret是别名，ret是num的别名
	//即函数返回谁，ret就是谁的别名
	//int &ret = my_data();
	//但是这种是很危险的,因为函数赋完值之后就结束，局部变量num就没有了,地址释放掉了
	//所以ret打印为空,并且你操作一个已释放的空间，这是非法的
	//cout << "ret=" << ret << endl;

	int& ret2 = my_data2();  //ret2是num的别名
	//当函数返回值作为左值，那么函数的返回值类型必须是引用
	cout << "ret2=" << ret2 << endl;
}

int& my_data3(void)
{
	static int num = 24;
	cout << "num=" << num << endl;
	return num;
}
void test02()
{
	//函数的返回值作为左值
	my_data3() = 2000;  //这个动作相当于给num赋值为2000
	//不要把my_data3()当成函数调用，要把它当成表达式
	my_data3();
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
