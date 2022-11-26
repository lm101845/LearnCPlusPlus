#include <iostream>

using namespace std;
class Base
{
public:
    virtual void sleep(void)
    {
        cout<<"父亲在睡觉"<<endl;
    }
};

class Son1:public Base
{
public:
    void sleep(void)
    {
        cout<<"Son1在安静的睡觉"<<endl;
    }
};
class Son2:public Base
{
public:
    virtual void sleep(void)
    {
        cout<<"Son2在轻度的睡觉"<<endl;
    }
};
class Son3:public Base
{
public:
    virtual void sleep(void)
    {
        cout<<"Son3在雨声般的睡觉"<<endl;
    }
};
class Son4:public Base
{
public:
    virtual void sleep(void)
    {
        cout<<"Son4在鼾声如雷"<<endl;
    }
};

class Son5:public Base
{
public:
    virtual void sleep(void)
    {
        cout<<"Son5在鼾声如战鼓"<<endl;
    }
};

//以基类指针作为函数的参数 函数可以操作该基类派生出的任意子类对象
void sleepFun(Base &ob)
{
    ob.sleep();
}

int main(int argc, char *argv[])
{
    Son1 ob1;
    Son2 ob2;
    Son3 ob3;
    Son4 ob4;
    Son5 ob5;

    sleepFun(ob1);
    sleepFun(ob2);
    sleepFun(ob3);
    sleepFun(ob4);
    sleepFun(ob5);

    return 0;
}
