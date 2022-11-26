#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include<string>
using namespace std;

//严格来说；类模板的类型 不是Person 而是Person<T1,T2>
template<class T1,class T2>
class Person{
public:
    T1 name;
    T2 age;
public:
    //类内声明
    Person(T1 name, T2 age);
    void showPerson(void);
};

//类外定义
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    cout<<"有参构造"<<endl;
    this->name = name;
    this->age = age;
}

template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
    cout<<"name = "<<name<<", age = "<<age<<endl;
}

#endif // PERSON_H
