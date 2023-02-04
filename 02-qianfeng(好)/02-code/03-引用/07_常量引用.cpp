//2023年2月4日13:36:24

#include <iostream>
using namespace std;

typedef struct
{
	int num;
	char name[32];
}STU;

//写法1：不好
void myPrintSTU1(STU tmp)  //普通结构体变量作为形参，开销太大(36个字节)
{
	cout << sizeof(tmp) << endl;  //36
	cout << "学号" << tmp.num << ",姓名:" << tmp.name << endl;
}

//写法2：好
void myPrintSTU2(const STU &tmp)   //STU &tmp = lucy; tmp是lucy的别名,没有开辟独立空间
//常量引用注意：字面量不能赋给引用，但是可以赋给const引用，const修饰的引用，不能修改(只能读不能写)
{
	cout << sizeof(tmp) << endl;  //36 严格来说还是测的lucy的大小
	//参数传引用的好处：节约了空间
	//tmp.num = 2000;   //这样的操作就是有危险的
	//参数传引用的坏处：函数内部对成员操作可以修改外部属性，有风险(可在参数前加const解决这个问题)
	cout << "学号" << tmp.num << ",姓名:" << tmp.name << endl;
}
void test01()
{
	STU lucy = { 100,"lucy" };
	//需求：定义一个函数，遍历(读操作)lucy成员(读操作，不让你写)
	//myPrintSTU1(lucy);
	myPrintSTU2(lucy);
}

void test02()
{
	//给常量10取个别名，叫num
	//int& num = 10;
	//报错：非常量引用的左值必须为初始值
	//int &针对的是int类型，严格来说10是const int类型

	const int &num = 10;  //这样写才行
	cout << "num=" << num<<endl;
}
int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
