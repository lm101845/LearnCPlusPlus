#include "mystring.h"
#include<string.h>
#include<iostream>
using namespace std;
MyString::MyString()
{
    this->str = NULL;
    this->size = 0;
    cout<<"无参构造"<<endl;
}

MyString::MyString(const char *str)
{
    cout<<"char *构造函数"<<endl;
    //申请空间
    this->str = new char[strlen(str)+1];
    //拷贝字符串
    strcpy(this->str, str);

    //更新size
    this->size = strlen(str);
}

MyString::MyString(const MyString &ob)
{
    cout<<"拷贝构造函数"<<endl;
    //申请空间
    this->str = new char[strlen(ob.str)+1];
    //拷贝字符串
    strcpy(this->str, ob.str);

    //更新size
    this->size = ob.size;
}

MyString::~MyString()
{
    cout<<"析构函数"<<endl;
    if(this->str != NULL)
    {
        delete [] this->str;
        this->str = NULL;
    }
}

int MyString::Size()
{
    return this->size;
}

char& MyString::operator[](int index)//index表示数组的下标
{
    //判断下标是否合法
    if(index >=0 && index < this->size)
    {
        return this->str[index];
    }
    else
    {
        cout<<"index无效"<<endl;
    }
}
ostream& operator<<(ostream &out, MyString &ob)
{
    out<<ob.str;//访问了ob中的私有数据 必须设置成友元
    return out;
}

istream& operator>>(istream &in, MyString &ob)
{
    //记得将原有的数据清楚
    if(ob.str != NULL)
    {
        delete [] ob.str;
        ob.str =NULL;
    }

    //获取键盘输入的字符串
    char buf[1024]="";//临时buf
    in >> buf;//先得到键盘输入的数据  然后根据buf的实际大小 开辟空间

    ob.str = new char[strlen(buf)+1];
    strcpy(ob.str, buf);
    ob.size = strlen(buf);

    return in;
}
