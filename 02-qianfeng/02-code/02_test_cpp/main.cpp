//2022年11月29日20:26:00
//2022年12月10日21:32:31
#include <iostream>

using namespace std;
int a = 10;   //全局变量
int apple = 8888;
void test01()
{
    int a = 20;   //局部变量(可以同名，但尽量不要同名)
    cout << "局部变量a=" << a << endl;    //优先选择局部变量

    //::叫作用域运算符 它可以让用户在局部范围内使用全局变量(C++独有)
    cout << "全局变量a=" << ::a << endl;  //取全局变量
    //C语言怎么搞定这个呢？你拿到全局变量的地址就可以了
}

//定义一个名字为A的命名空间
//命令空间里面可以存放变量、函数等
//即在外面套了一个壳，表明里面的东西是属于外面这个壳的
namespace A {
    int a = 100;
}

//后来才想起来要给命名空间A再加一个变量，也是可以的
//此时命名空间A会进行合并
//命名空间是开放的，即可以随时把新的成员加入已有的命名空间中
namespace A {
    int b = 200;
    //命名空间里面也可以放函数
    void func() {
        cout << "hello namespace!!" << b<<endl;
        //命名空间里面的函数可以直接调用命名空间里面的变量名
    }
}

namespace B {
    int a = 100;
}

void test02()
{
    cout << "全局中的a=" << ::a << endl;
    cout << "A中的a=" << A::a << endl;
    cout << "B中的a=" << B::a << endl;
}
//命名空间的嵌套
namespace C {
    int a = 1000;
    namespace D {
        int a = 2000;
    }
}

void test03()
{
    cout << "命名空间中的D中的a:" << C::D::a << endl;
   
}

void test04()
{
    A::func();
}


namespace D {
    int d = 250;
    void foo();   //这里也要写一下，定义一下，但具体实现是在外面实现的
}

//void foo()    //普通函数
void D::foo()  //成员函数  在外部定义的时候，记得加作用域
{
    cout << "命名空间中的D中的d:" << D::d << endl;
    cout << "命名空间中的D中的d:" << d << endl;  //可以不用写D::，因为是同一个命名空间的数据
    cout << "其他命名空间中的其他变量:" << C::D::a << endl;   //这样也是可以的！！！
   
}
void test05()
{
    D::foo();
}

namespace veryLongName {
    int apple = 100;
    void func() { cout << "hello namespace" << endl; }
}

void test06()
{
    int apple = 250;
    //命名空间.属性或命名空间.方法，这是最安全的使用命名空间的方式
    //但是有人很懒，不想写这么长的【命名空间.】，就想直接写属性或方法名
    //可以的，使用一个using方法
    cout << "apple=" << veryLongName::apple << endl;
    veryLongName::func();
    //表明使用veryLongName命名空间，则下方出现的变量，先从这个命名空间去找
    //找不到才从其他地方找，实在找不到也会报错
    using namespace veryLongName;
    cout << "apple=" << apple << endl;   //250 优先局部变量
    func();
}

void test07()
{
    //int apple = 300;    这样会报错'apple' is already declared in this scope
    // 通过using直接使用命名空间中的成员，会和局部变量冲突
    //但是它不会和全局变量冲突(它隐藏了全局变量的作用域 ::)
    
    //指明使用命名空间中的具体成员 
    using  veryLongName::apple;
    cout << "命名空间中的apple=" << apple << endl;
    //但是func使用的时候，必须加作用域
    cout << "全局变量中的apple=" << ::apple << endl;
}

namespace C {
    //函数重载——C语言不支持
    void func() { cout << "无参的func" << endl; }
    void func(int a) { cout << "int的func" << endl; }
    void func(int a,int b) { cout << "int int的func" << endl;}
}

void test08()
{
    //using指明使用C中的func
    using C::func;
    func();
    func(10);
	func(10, 20);
}
int main(int argc, char *argv[])
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
