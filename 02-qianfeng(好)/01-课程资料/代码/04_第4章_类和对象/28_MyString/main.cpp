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

    MyString str3("hello str3");
    cout<<"str3:"<<str3<<endl;

    //将对象str2 赋值 给str3
    //(默认赋值语句 浅拷贝)
    //必须重载=运算符（成员函数完成）
    str3 = str2;
    cout<<"str3:"<<str3<<endl;

    MyString str4("hello str4");
    cout<<"str4:"<<str4<<", size = "<<str4.Size()<<endl;
    //必须重载=运算符（成员函数完成）
    str4="hello string";
    cout<<"str4:"<<str4<<", size = "<<str4.Size()<<endl;

    //重载+运算符
    MyString str5("我爱大家");
    MyString str6("我爱千锋");
    cout<<str5+str6<<endl;

    MyString str7("大家爱我");
    cout<< str7+"千锋爱我"<<endl;

    //重载==运算符
    MyString str8("hehe");
    MyString str9("haha");
    if(str8 == str9)
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }

    if(str8 == "hehe")
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }


    return 0;
}
