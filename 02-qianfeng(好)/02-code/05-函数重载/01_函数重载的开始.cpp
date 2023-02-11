//2023年2月11日09:46:29
//函数重载体现了C++的多态

#include <iostream>
using namespace std;

//同一个作用域  参数个数不同  参数类型(而不是形参名！！！！)不同  参数顺序不同
void myFunc()
{
    cout << "无参的myFunc" << endl;
}
void myFunc(int a)
{
    cout << "int的myFunc" << endl;
}
void myFunc(int a, int b)
{
    cout << "int,int 的myFunc" << endl;
}
void myFunc(int a, double b)
{
    cout << "int , double的myFunc" << endl;
}
void myFunc(double a, int b)
{
    cout << "double,int的myFunc" << endl;
}
/*
int myFunc(double a,int b)//不能重载,出现了二义性(不能把返回值作为重载的依据)
{
    cout<<"double,int的myFunc 返回值类型int"<<endl;
}*/
void test01()
{
    myFunc(10);//int
    myFunc(10, 20);//int int
    myFunc(10, 20.2);//int double
    myFunc(10.1, 20);//double int
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
