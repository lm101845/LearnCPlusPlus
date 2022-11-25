#include <iostream>

using namespace std;
#if 0
int a = 10;//全局变量
void test01()
{
    int a = 20;//局部变量
    cout<<"局部变量a = "<<a<<endl;//优先选择局部变量

    //::作用域运算符（c++独有）
    cout<<"全局变量a = "<<::a<<endl;//取全局变量
}

//定义一个名字为A的命名空间（变量、函数）
namespace A {
    int a = 100;
}
namespace B {
    int a = 200;
}

void test02()
{
    //A::a  a是属于A中
    cout<<"A中a = "<<A::a<<endl;
    cout<<"B中a = "<<B::a<<endl;
}


namespace A {
    int a = 1000;
    namespace B {
        int a = 2000;
    }
}
void test03()
{
    cout<<"A中的a = "<<A::a<<endl; //1000
    cout<<"B中的a = "<<A::B::a<<endl; //2000
}

namespace A {
    int a = 100;
    int b = 200;
}
//将c添加到已有的命名空间A中
namespace A {
    int c = 300;
}



void test04()
{
    cout<<"A中a = "<<A::a<<endl;//100
    cout<<"A中c = "<<A::c<<endl;//200
}


namespace A {
    int a=100;//变量

    void func()//函数
    {
        cout<<"func遍历a = "<<a<<endl;
    }
}
void test05()
{
    //变量的使用
    cout<<"A中的a = "<<A::a<<endl;

    //函数的使用
    A::func();
}


namespace A {
    int a=100;//变量

    void func();
}

void A::func()//成员函数 在外部定义的时候 记得加作用域
{
    //访问命名空间的数据不用加作用域
    cout<<"func遍历a = "<<a<<endl;
}

void funb()//普通函数
{
    cout<<"funb遍历a = "<<A::a<<endl;
}
void test06()
{
   A::func();
    funb();
}

namespace veryLongName {
    int a=100;
    void func(){cout<<"hello namespace"<<endl;}
}
int a = 200;
void test07()
{
    //using直接使用 命名空间中的成员 不会和 全局变量冲突
    using veryLongName::a;

    cout<<"命名空间中a = "<<a<<endl;//命名空间中的成员 100
    cout<<"全局变量中a = "<<::a<<endl;//200

    //但是func使用的时候 必须加作用域
    veryLongName::func();
}


namespace A {
    //函数重载 函数名+参数 组合代表是函数的入口地址
    void func(){cout<<" 无参的func"<<endl;}
    void func(int a){cout<<" int的func"<<endl;}
    void func(int a,int b){cout<<" int int的func"<<endl;}
}

void test08()
{
    //using指明 使用 A中的func 会对 所有的func起作用
    using A::func;
    func();
    func(10);
    func(10,20);
}

namespace A {
    int a = 10;
}
namespace B {
    int a = 20;
}
void test09()
{
    //此处的a 不知道是A还是B中a
    //cout<<"a = "<<a<<endl;//err

    //解决方法
    cout<<"A::a = "<<A::a<<endl;//100
    cout<<"B::a = "<<B::a<<endl;//200
}
#endif
int a = 200;
namespace veryLongName {
    int a=100;
    void func(){cout<<"hello namespace"<<endl;}
}

void test07()
{
    //using直接使用 命名空间中的成员 不会和 全局变量冲突
    using namespace veryLongName;

    cout<<"命名空间中a = "<<a<<endl;//命名空间中的成员 100
    cout<<"全局变量中a = "<<::a<<endl;//200

    //但是func使用的时候 必须加作用域
    veryLongName::func();
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
