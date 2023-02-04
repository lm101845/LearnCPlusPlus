#include <iostream>
#include<string>
using namespace std;
//person类向前声明
template<class T1,class T2> class Person;

//提前声明函数模板 告诉编译器printPerson02函数模板是存在
template<class T1,class T2> void printPerson02(Person<T1,T2> &ob);

template<class T1,class T2>
class Person{
private:
    T1 name;
    T2 age;
public:
    Person(T1 name, T2 age);
    //1、友元函数在类中定义（友元不属于该类成员函数）
    friend void printPerson01(Person<T1,T2> &ob)
    {
        cout<<"name = "<<ob.name<<" ,age = "<<ob.age<<endl;
    }
    //2、友元函数在类外定义 必须告诉编译器 该友元函数是模板函数
    friend void printPerson02<>(Person<T1,T2> &ob);
};
//函数模板
template<class T1,class T2>
void printPerson02(Person<T1,T2> &ob)
{
    cout<<"name = "<<ob.name<<" ,age = "<<ob.age<<endl;
}
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    this->name = name;
    this->age = age;
}
int main(int argc, char *argv[])
{
    Person<string,int> ob("德玛",18);
    //通过友元 访问类模板中的数据
    printPerson01(ob);

    printPerson02(ob);

    return 0;
}
