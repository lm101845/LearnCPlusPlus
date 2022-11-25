#include <iostream>

using namespace std;
class A
{
private:
    int m_a;
public:
    A()
    {
        cout<<"A无参构造函数"<<endl;
    }
    A(int a)
    {
        m_a = a;
        cout<<"A有参构造函数"<<endl;
    }
    ~A()
    {
        cout<<"A析构函数"<<endl;
    }
};
class B
{
private:
    int m_b;
public:
    B()
    {
        cout<<"B无参构造函数"<<endl;
    }
    B(int b)
    {
        m_b = b;
        cout<<"B有参构造函数"<<endl;
    }
    ~B()
    {
        cout<<"B析构函数"<<endl;
    }
};

class Data
{
private:
    A oba;//对象成员
    B obb;//对象成员


    int data;//基本类型成员
public:
    Data()
    {
        cout<<"Data无参构造"<<endl;
    }

    //初始化列表:对象名+() 显示调用 调用对象成员的构造函数
    Data(int a, int b, int c):oba(a),obb(b),data(c)
    {
        //data =c;
        cout<<"有参构造"<<endl;
    }
    ~Data()
    {
        cout<<"Data析构函数"<<endl;
    }

};
void test01()
{
    //先调用 对象成员的构造-->自己的构造函数-->析构自己--->析构对象成员
    //Data ob1;

    //系统默认调用的是 对象成员的无参构造
    //必须在Data的构造函数中 使用初始化列表 使其对象成员 调用有参构造
    Data ob2(10,20,30);

}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
