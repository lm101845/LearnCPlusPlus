#ifndef MYSTRING_H
#define MYSTRING_H
#include<iostream>
using namespace std;
class MyString
{
    friend ostream& operator<<(ostream &out, MyString &ob);
    friend istream& operator>>(istream &in, MyString &ob);
private:
    char *str;
    int size;
public:
    MyString();
    MyString(const char *str);
    MyString(const MyString &ob);
    ~MyString();
    int Size(void);

    //重载[]
    char& operator[](int index);
    //重载= 参数是对象
    MyString& operator=(const MyString &ob);
    //重载= 参数是字符串常量  const char *
    MyString& operator=(const char *str);

    //重载+运算符
    MyString& operator+(const MyString &ob);
    MyString& operator+(const char *str);

    //重载==运算符
    bool operator==(const MyString &ob);
    bool operator==(const char *str);

};

#endif // MYSTRING_H
