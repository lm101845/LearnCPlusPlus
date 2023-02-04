#include <iostream>

using namespace std;
struct stu
{
    int num;
    char name[32];

    //c++语言 允许在结构体中  定义成员函数
    void func(void)
    {
        printf("我是结构体中的func");
    }

};
void test01()
{
    //C++语言不用加struct
    stu lucy = {100, "lucy"};

    //调用结构体中的成员方法（成员函数）
    lucy.func();
}
void test02()
{
    int a = 10;
    int b = 20;
    cout<<"c++中"<<(a>b?a:b)<<endl;

    //a>b?a:b整体结果是变量本身(引用) 左值（能被赋值）
    a>b?a:b = 100;//b =100
}

void test03()
{
    const int a = 10;
    //a = 100;//err 不能给常量a赋值
}

//声明
extern const int num;
struct Person
{
    int num;
    char name[32];
};
void test04()
{
    cout<<"全局num = "<<num<<endl;//err 不识别num

    //1、c++中 对于基础类型 系统不会给data开辟空间 data放到符号表中
    const int data = 10;
    //data = 100;//err 只读
    cout<<"data = "<<data<<endl;
    //2、c++中当 对data 取地址的时候 系统就会给data开辟空间
    int *p = (int *)&data;
    *p = 2000;
    cout<<"*p = "<<*p<<endl;//空间内容修改成功 2000

    cout<<"data = "<<data<<endl;//data 还是10为啥？

    //2、当以变量的形式 初始化 const修饰的变量 系统会为其开辟空间
    int b = 200;
    const int a= b;//系统直接为a开辟空间 而不会把a放入符号表中
    p = (int *)&a;
    *p = 3000;
    cout<<"*p = "<<*p <<endl;//3000
    cout<<"a = "<<a <<endl;//300

    //3、const 自定义数据类型(结构体、对象) 系统会分配空间
    const Person per = {100,"lucy"};
    //per.num = 1000;//err
    cout<<"num = "<<per.num<<", name = "<<per.name<<endl;//100 lucy
    Person *p1 = (Person *)&per;
    p1->num = 2000;
    cout<<"num = "<<per.num<<", name = "<<per.name<<endl;//2000 lucy
}

#define MAX 1024
const short my_max =1024;
void func(short i)
{
    cout<<"short函数"<<endl;
}
void func(int i)
{
    cout<<"int函数"<<endl;
}
void test05()
{
    func(MAX);//int 函数

    func(my_max);//short函数
}

void my_func(void)
{
    //作用范围 是当前复合语句
    const int my_num = 10;

    //作用范围 当前位置 到文件结束
    #define MY_NUM 10
}
void test06()
{
    //cout<<"my_num = "<<my_num<<endl;//err 不识别
    cout<<"MY_NUM = "<<MY_NUM<<endl;//ok 能识别
}
namespace A {
    // const可以作为成员
    const int my_a=100;

    //MY_A 属于文件 不属于A
    #define MY_A 200
}
void test07()
{
    cout<<"my_a = "<<A::my_a<<endl;
    //cout<<"MY_A = "<<A::MY_A<<endl;//err
    cout<<"MY_A = "<<MY_A<<endl;
}

int main(int argc, char *argv[])
{

    test07();
    return 0;
}

