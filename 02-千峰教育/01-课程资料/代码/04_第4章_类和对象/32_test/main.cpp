#include <iostream>

using namespace std;

class Base
{
private:
    int a;
    int data;
public:

    Base()
    {
        cout<<"父类的无参构造函数"<<endl;
    }
    Base(int a)
    {
        this->a = a;
        cout<<"父类的有参构造函数int"<<endl;
    }
    Base(int a, int data)
    {
        this->a = a;
        this->data = data;
        cout<<"父类的有参构造函数int int"<<endl;
    }
    ~Base()
    {
        cout<<"父类中的析构函数"<<endl;
    }
};
class Son:public Base
{
private:
    int b;
public:
    Son()
    {
        cout<<"子类的无参构造"<<endl;
    }
    Son(int b)
    {
        this->b = b;
        cout<<"子类的有参构造函数int"<<endl;
    }

    Son(int a,int b):Base(a),b(b)//显示的调用父类的有参构造
    {
        //this->b = b;
        cout<<"子类的有参构造函数 int int"<<endl;
    }
    //子类必须用 初始化列表 显示的调用父类的有参构造
    //父类名称(参数)
    Son(int a,int b, int c):Base(a,c),b(b)//显示的调用父类的有参构造
    {
        //this->b = b;
        cout<<"子类的有参构造函数 int int int"<<endl;
    }
    ~Son()
    {
        cout<<"子类中的析构函数"<<endl;
    }
};
void test01()
{
    //子类 默认 会调用 父类的无参构造
    //Son ob1(10);

    //子类必须用 初始化列表 显示的调用父类的有参构造
    //父类名称+()
    //Son ob2(10,20);

    Son ob3(10,20,30);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
