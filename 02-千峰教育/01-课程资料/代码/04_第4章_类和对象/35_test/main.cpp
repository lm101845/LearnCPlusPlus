#include <iostream>

using namespace std;
class Base
{
public:
    //静态成员属于类 而不属于对象
    static int num;
    static int data;

    static void showData(void);

};
int Base::num  = 100;
int Base::data = 200;

class Son:public Base
{
public:
    static int data;//父和子类 静态成员 同名
    static void showData(void);
};
int Son::data = 300;

void test01()
{
    //从Base类中访问
    cout<<Base::num<<endl;

    // Son 也拥有了静态成员num
    cout<<Son::num<<endl;

    //父和子类 静态成员 同名 在子类中 访问子类中的成员
    cout<<Son::data<<endl;//200

    //父和子类 静态成员 同名 访问父类中的成员 必须加 Base::
    cout<<Son::Base::data<<endl;//200


    //父和子类 同名静态成员函数 子类默认访问子类的静态成员函数
    Son::showData();
    //父和子类 同名静态成员函数 子类访问父类的静态成员函数 必须加 Base::
    Son::Base::showData();
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}



void Base::showData()
{
    cout<<"父类中showData"<<endl;
}

void Son::showData()
{
    cout<<"子类中的showData"<<endl;
}
