#include <iostream>

using namespace std;
//设置一个父类
class Base
{
public:
    int a;
private:
    int b;
protected:
    int c;
};

//设置一个子类
class Son:public Base
{
public:
    //父类中的public数据  在子类中 也是public
    //父类中的private数据 在子类中 是不可见的
    //父类中的protected数据 在子类中 是protected的
    //子类的内部
    void showSon()
    {
        //b = 200;//不能直接访问
        c =300;//在子类 内部是可以访问的
    }
};

void test01()
{
    //子类的外部
    Son ob;
    ob.a = 100;
    cout<<"父类中的public数据a = "<<ob.a<<endl;

    //ob.b = 200;//在子类外 访问不了
    //ob.c = 200;//在子类外 访问不了

}

//保护继承
class Son1:protected Base
{
private:

public:
    //父类中的public数据  在子类中 也是protected
    //父类中的private数据 在子类中 是不可见的
    //父类中的protected数据 在子类中 是protected的
    //子类的内部
    void showbase(){
        a = 100;//子类内部可访问
        //b = 200;//不能直接访问
        c = 300;//子类内部可访问
    }
};
void test02()
{
    Son1 ob;
    //ob.a;//子类外不可访问
    //ob.b;//子类外不可访问
    //ob.c;//子类外不可访问
}
//保护继承
class Son2:private Base
{
private:

public:
    //父类中的public数据  在子类中 也是private
    //父类中的private数据 在子类中 是不可见的
    //父类中的protected数据 在子类中 是private的
    //子类的内部
    void showbase(){
        a = 100;//子类内部可访问
        //b = 200;//不能直接访问
        c = 300;//子类内部可访问
    }
};
void test03()
{
    Son2 ob;
    //ob.a;//子类外不可访问
    //ob.b;//子类外不可访问
    //ob.c;//子类外不可访问
}
int main(int argc, char *argv[])
{
    test03();
    return 0;
}
