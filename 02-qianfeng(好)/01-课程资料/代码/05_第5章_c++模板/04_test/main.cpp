#include <iostream>

using namespace std;

void mySwap(int a,int b)
{
    cout<<"普通函数"<<endl;
}

template<typename T>
void mySwap(T a,T b)
{
    cout<<"函数模板"<<endl;
}
void test01()
{
    int a = 10;
    char b = 'b';

    //默认优先选择普通函数
    mySwap(a,a);

    //选择函数模板
    mySwap<>(a,a);

    //函数模板 的参数类型 不能自动类型转换
    //普通函数 的参数类型 不能自动类型转换
    mySwap(a,b);//选择普通函数


    //用户 指定T的类型
    mySwap<int>(a,b);//选择函数模板
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
