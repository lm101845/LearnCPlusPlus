#include <iostream>

using namespace std;
class Other
{
public:
    Other()
    {
        cout<<"对象成员的构造函数"<<endl;
    }
    ~Other()
    {
        cout<<"对象成员的析构函数"<<endl;
    }
};
class Base
{
public:
    Base()
    {
        cout<<"父类的无参构造函数"<<endl;
    }
    ~Base()
    {
        cout<<"父类中的析构函数"<<endl;
    }
};
class Son:public Base
{
public:
    Son()
    {
        cout<<"子类的无参构造"<<endl;
    }
    ~Son()
    {
        cout<<"子类中的析构函数"<<endl;
    }

    Other ob;//对象成员

};
void test01()
{
    Son ob1;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
