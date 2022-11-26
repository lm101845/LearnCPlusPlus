#include <iostream>
#include"mystring.h"
using namespace std;

int main(int argc, char *argv[])
{
    MyString str1("hehe");
    //自定义对象 必须重载<< (普通全局友元函数实现)
    cout<<str1<<endl;
    cout<<"size = "<<str1.Size()<<endl;

    //自定义对象 必须重载>> (普通全局友元函数实现)
    cin>>str1;
    cout<<str1<<endl;
    cout<<"size = "<<str1.Size()<<endl;

    MyString str2("hello class");
    //重载[]运算符
    cout<<str2[1]<<endl;

    //重载[]运算符 返回值必须是左值 才能写操作
    //重载[]运算符 的返回值必须是引用
    str2[1] ='E';
    cout<<str2<<endl;

    return 0;
}
