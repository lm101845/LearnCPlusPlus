#include <iostream>

using namespace std;
class Base
{
public:
    void func(void)
    {
        cout<<"父类中的void func"<<endl;
    }
    void func(int a)
    {
        cout<<"父类中的int func a = "<<a<<endl;
    }
    void myFunc()
    {
        cout<<"父类中的其他函数"<<endl;
    }
};

class Son:public Base
{
public:
    //一旦子类 实现了 父类的同名成员函数 将屏蔽所有父类同名成员函数
    int func(int a)
    {
        cout<<"子类中func int "<<endl;
    }
};

void test01()
{
    //为啥构造和析构除外?父类的构造和析构 只有父类自己知道该怎么做（构造和析构 系统自动调用）
    //子类会继承父类所有成员函数(构造和析构函数除外) 和成员变量
    Son ob1;
    ob1.func(10);
    ob1.func(10);//err //一旦子类 实现了 父类的同名成员函数 将屏蔽所有父类同名成员函数
    ob1.myFunc();
    //如果用户 必须要调用父类 的同名成员函数 必须加作用域
    ob1.Base::func();//调用父类的void func
    ob1.Base::func(10);//调用父类的int func
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
