#include <iostream>

using namespace std;
template<class T1, class T2>
class Person{
public:
    Person(T1 name, T2 age);
    void showPerson();
public:
    T1 name;
    T2 age;
};

int main(int argc, char *argv[])
{
    Person<string,int> ob("lucy", 18);
    ob.showPerson();
    return 0;
}

template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    this->name = name;
    this->age = age;
}

template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
    cout<<"name = "<<name<<", age = "<<age<<endl;
}
