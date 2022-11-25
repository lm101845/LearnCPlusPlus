#include <iostream>
#include<string>
#include"myarray.hpp"
using namespace std;
class Person
{
    friend ostream& operator<<(ostream &out, const Person &ob);
private:
    string name;
    int age;
public:
    Person()
    {
       ;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

};
ostream& operator<<(ostream &out, const Person &ob)
{
    out<<"name = "<<ob.name<<", age = "<<ob.age<<endl;
    return out;
}
int main(int argc, char *argv[])
{
    MyArray<char> ob(10);
    ob.push_back('a');
    ob.push_back('b');
    ob.push_back('c');
    ob.push_back('d');

    ob.printArray();

    MyArray<int> ob2(10);
    ob2.push_back(10);
    ob2.push_back(20);
    ob2.push_back(30);
    ob2.push_back(40);
    ob2.printArray();

    //存放自定义 数据
    MyArray<Person> ob3(10);
    ob3.push_back(Person("德玛",18));
    ob3.push_back(Person("风男",19));
    ob3.push_back(Person("小法",20));
    ob3.push_back(Person("瞎子",21));
    ob3.printArray();


    return 0;
}
