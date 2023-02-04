//2022年12月11日10:46:40
#include <iostream>

using namespace std;

//int a = 10;  //有赋值，看成定义
//int a;       //同名且没有赋值，看成声明
////C中这么写没问题，而C++中会编译报错：error: redefinition of 'int a'
//C++中的语法检查比C增强了
// 
// 
//int main(int argc, char *argv[])
//{
//    typedef enum COLOR { GREEN, RED, YELLOW } color;
//    /**
//     *这段代码定义了一个名为 COLOR 的枚举类型。枚举类型是一种特殊的类型，
//     它允许您为其定义一组名称，并将一个变量绑定到其中的一个名称上。
//
//     在这种情况下，枚举类型 COLOR 包含三个名称：GREEN、RED 和 YELLOW。
//     这些名称代表不同的颜色。例如，可以定义一个变量 color，并将其绑定到 GREEN 上，表示该变量现在代表绿色。
//
//     除了定义枚举类型外，这段代码还使用了 typedef 关键字。
//     它允许您为枚举类型定义一个简写（在这种情况下为 color），以便在定义变量时更方便地使用它。
//
//     因此，可以使用以下代码来定义一个变量并将其绑定到 GREEN 上：
//
//    color c = GREEN;
//    在这种情况下，c 是一个枚举类型的变量，它绑定到了 COLOR 枚举类型中的 GREEN 名称上。
//
//     */
//
//    color mycolor = GREEN;
//    mycolor = 10;
//    printf("mycolor:%d\n", mycolor);
//    //以上代码C可以编译通过，而C++不行
//    cout << "Hello World!" << endl;
//    return 0;
//}


struct stu {
	int num;
	char name[32];
	//C语言结构体中不能定义成员函数，而C++可以
	void func(void)
	{
		printf("我是结构体中的函数");
	}
};

void test01()
{
	//struct stu lucy = { 100,"Lucy" };
	//C语言中必须加struct修饰
	stu lucy = { 100,"Lucy" };
	//C++中不加不会报错
	cout << "Hello World!" << lucy.num<<lucy.name<<endl;
	//调用结构体中的成员方法(成员函数)
	lucy.func();
}

void test02()
{
	bool mybool;
	cout << "sizeof(bool)=" << sizeof(bool)<<endl;
	mybool = false;
	cout << "false=" << false << endl;   //0
	cout << "true=" << true << endl;   //1
}

void test03()
{
	int a = 10;
	int b = 20;
	cout << "表达式的值为" << (a > b ? a : b) << endl;
	//C语言(a > b ? a : b)返回的是具体值，是右值，不能被赋值(如a = 10，这是不对的，10不能被赋值给a)
	//C++(a > b ? a : b)返回的是变量(引用)，是左值，可以被赋值！！！
}

//对func.c中的num进行声明(使用extern，并且声明的时候记得不要赋值！)
extern const int apple;
//extern const int apple = 250;  //这样写，不会把它当成声明，把它当成定义

void test04()
{
	const int num = 100;  //局部只读变量 内存在栈区(可读可写)
	//const int a = 10;
	//a = 100;   //err 不能给常量赋值
	//C语言中const 修饰变量名 说明变量名为只读（用户不能通过变量名data进行赋值）
	//使用const修饰num，表明你不能直接通过变量名进行修改，但是num是一个变量，它有地址
	//只要有地址，就可以对它进行取地址间接的修改！！！！！
	//但是：如果知道data的地址 可以通过地址间接的修改data所对应空间的内容
	int* p = (int*)&num;
	*p = 2000;
	cout << num << endl;  
	cout << *p << endl;
}

//void test05()
//{
//    cout << "apple=" << apple << endl;   //不识别num err
//	int* p = (int*)&apple;
//	*p = 2000;
//	cout << *p << endl;
//	cout << apple << endl;  
//}

#define MAX 1024
//宏是没有类型的
const short my_max = 1024;

void func(short i)
{
	cout << "short函数" << endl;
}

void func(int i)
{
	cout << "int函数" << endl;
}
void test06()
{
	func(MAX);
	func(my_max);
}

void my_func(void)
{
	//作用范围是当前复合语句
	const int num_const = 10;
	//作用范围是当前位置到文件结束
	#define MY_NUM_DEFINE 10
}
void test07()
{
	//cout << num_const << endl;   err 不识别
	cout << MY_NUM_DEFINE << endl;  //可以识别
}

namespace AA {
	//const可以作为成员
	const int my_a = 100;
	#define MY_A 200
	//它只是在这个位置定义了一个宏，但是这个宏不属于这个命名空间的，它是属于文件的
}
void test08()
{
	cout << "my_a=" << AA::my_a << endl;
	//cout << "my_a=" << AA::MY_A << endl;  //报错
	cout << "MY_A=" << MY_A << endl;
	
}

int main(int argc, char* argv[]) 
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	test08();
	return 0;
}
