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


int main(int argc, char *argv[])
{
    Person<string,int> ob1("德玛西亚", 18);
    ob1.showPerson();

    Person<int,int> ob2(100,200);
    ob2.showPerson();
    return 0;
}


