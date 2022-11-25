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

    //жиди[]
    char& operator[](int index);


};

#endif // MYSTRING_H
