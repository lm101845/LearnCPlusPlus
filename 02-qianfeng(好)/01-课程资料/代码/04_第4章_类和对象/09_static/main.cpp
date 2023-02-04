#include <iostream>

using namespace std;
class Data
{
public:
    const static int data;//静态成员变量(类内声明)
public:
    //静态成员函数  属于类 而不属于对象
    static int getDataStatic(void)
    {
        //num = 200;//err 静态成员函数 不能访问普通成员变量
        return data;
    }
};

//定义的时候 不需要加static
const int Data::data=100;//类外定义+初始化

void test02()
{
    //访问
    cout<<Data::data<<endl;
    //赋值
    //Data::data = 200;//err data静态成员只读
    cout<<Data::data<<endl;
}
#if 0

class Data
{
private:
    int num;//普通成员变量
    const static int data;//静态成员变量(类内声明)
public:
    //普通成员函数 依赖于 对象的 必须对象调用
    int getData(void)
    {
        num = 200;//non-static
        return data;//static
    }

    //静态成员函数  属于类 而不属于对象
    static int getDataStatic(void)
    {
        //num = 200;//err 静态成员函数 不能访问普通成员变量
        return data;
    }
};

void test01()
{
    //cout<<Data::data<<endl;//err 静态data是私有的 类外不能直接访问
    //cout<< Data::getData()<<endl;//err getData() 必须对象调用

    Data ob;
    cout<<ob.getData()<<endl;
    //存在问题：data静态的 在创建对象之前 就已经存在
    //如果类没有实例化对象 难道 就不能使用data了吗？
    //解决上述问题 就要用到静态成员函数

    //1、静态成员函数 属于类 就可以通过类名称直接访问
    cout<<Data::getDataStatic()<<endl;

    //2、也可以通过对象名访问（对象共享静态成员函数）
    cout<<ob.getDataStatic()<<endl;
}
#endif
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
