#include <iostream>
#include<string>
using namespace std;
class Person
{
    friend ostream &operator <<(ostream &out,Person &ob);
public:
    int a;
    int b;
public:
    Person(int a,int b)
    {
        cout<<"有参构造"<<endl;
    }

    ~Person()
    {
        cout<<"析构函数"<<endl;
    }

    void showPoint()
    {
        cout<<"a="<<a<<", b="<<b<<endl;
    }

};

ostream& operator<<(ostream &out,Person &ob)
{
    out<<"a="<<ob.a<<", b="<<ob.b<<endl;
    return out;
}

template<typename T>
T& myMax(T &a,T &b)
{
    return a>b ? a:b;
}

template<> Person& myMax<Person>(Person &ob1,Person &ob2)
{
    return ob1.a>ob2.a ? ob1:ob2;
}

void test02()
{
    int data1=10,data2=20;
    cout<<myMax(data1,data2)<<endl;

    Person ob1(10,20);
    Person ob2(100,200);
    cout<<myMax(ob1,ob2)<<endl;
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
