#include <iostream>

using namespace std;
class Animal{
public:
    //纯虚函数
    //如果一个类中拥有 纯虚函数 那么这个类 就是抽象类
    //抽象类 不能实例化对象
    virtual void sleep(void) = 0;

    Animal()
    {
        cout<<"animal构造"<<endl;
    }

    //虚析构
    virtual ~Animal()
    {
        cout<<"animal析构"<<endl;
    }
};

class Cat:public Animal{
public:
#if 1
    //在子类中  必须实现 基类的纯虚函数
    virtual void sleep(void)
    {
        cout<<"小猫在睡觉!!喵喵"<<endl;
    }
#endif
    Cat()
    {
        cout<<"Cat的构造"<<endl;
    }
    virtual~Cat()
    {
        cout<<"Cat的析构"<<endl;
    }
};

void test01()
{
    Animal *p = new Cat;
    p->sleep();
    delete p;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
