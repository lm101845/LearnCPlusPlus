#include <iostream>
#include <list>
#include<algorithm>
#include<string>
using namespace std;
class Person
{
public:
    string name;
    int age;
public:
    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    //成员函数重载 ==运算符
    bool operator==(const Person &ob)
    {
        if(this->name == ob.name && this->age == ob.age)
            return true;
        return false;
    }
#if 0
    //成员函数重载 <运算符
    bool operator<(const Person &ob)
    {
        if(this->age < ob.age)
            return true;

        return false;
    }
#endif
};
void printListPerson(list<Person> &L)
{
    cout<<"-----------"<<endl;
    for(list<Person>::iterator it=L.begin(); it!= L.end();it++)
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
}
void test01()
{
    //存放自定义数据
    list<Person> L;
    L.push_back(Person("德玛西亚",48));
    L.push_back(Person("提莫", 28));
    L.push_back(Person("狗头", 18));
    L.push_back(Person("牛头", 19));

    printListPerson(L);

    //删除狗头
    Person tmp("狗头", 18);
    //重载==运算符
    L.remove(tmp);
    printListPerson(L);
}
#if 0
void test02()
{
    //存放自定义数据
    list<Person> L;
    L.push_back(Person("德玛西亚",48));
    L.push_back(Person("提莫", 28));
    L.push_back(Person("狗头", 18));
    L.push_back(Person("牛头", 19));
    printListPerson(L);

    //对于自定义数据 我们可以重载<运算符
    L.sort();

    printListPerson(L);
}
#endif

bool myComparePerson(const Person &ob1, const Person &ob2)
{
    return ob1.age > ob2.age;
}
void test03()
{
    //存放自定义数据
    list<Person> L;
    L.push_back(Person("德玛西亚",48));
    L.push_back(Person("提莫", 28));
    L.push_back(Person("狗头", 18));
    L.push_back(Person("牛头", 19));
    printListPerson(L);

    //对于自定义数据 我们可以重载<运算符
    L.sort(myComparePerson);

    printListPerson(L);
}

#include<vector>
void PrintVectorPerson(vector<Person> &v)
{
    cout<<"-----------"<<endl;
    for(vector<Person>::iterator it=v.begin(); it!= v.end();it++)
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
}
//仿函数指定排序规则
class myComparePerson2
{
public:
    bool operator()(Person &ob1, Person &ob2)
    {
        return ob1.age < ob2.age;
    }
};
void test04()
{
    vector<Person> v;
    v.push_back(Person("德玛西亚",48));
    v.push_back(Person("提莫", 28));
    v.push_back(Person("狗头", 18));
    v.push_back(Person("牛头", 19));
    PrintVectorPerson(v);

    //默认比较方式从小-->大
    //vector存放自定义数据 可指定排序规则 (普通函数)
    //sort(v.begin(),v.end(), myComparePerson);

    //vector存放自定义数据 可指定排序规则 (仿函数)
    sort(v.begin(),v.end(), myComparePerson2() );

    PrintVectorPerson(v);

}
class MyAdd{
public:
    //本质就是成员函数 函数名叫operator()
    int operator()(int a, int b)
    {
        cout<<"调用了operator() int int"<<endl;
        return a+b;
    }
    int operator()(int a, int b, int c)
    {
        cout<<"调用了operator()int int int "<<endl;
        return a+b+c;
    }

};
void test05()
{
    MyAdd ob1;
    cout<<ob1.operator ()(10,20)<<endl;
    //编译器优化
    //严格意义：ob1是对象 和（）结合 调用operator ()成员函数
    //ob1(100,200) ob1本质是对象不是函数名 只是形式像函数调用
    //叫做仿函数
    cout<<ob1(100,200)<<endl;
    cout<<ob1(100,200,300)<<endl;

    cout<<MyAdd()(1000,2000)<<endl;

}
void myPrintVectorInt(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
//指定打印方式
void myPrint01(int val)
{
    cout<<val<<" ";
}
void test06()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //方法1:访问v容器 普通函数
    myPrintVectorInt(v);

    //方法2:访问v容器 系统算法for_each
    for_each(v.begin(),v.end(), myPrint01);
    cout<<endl;

    //方法3:访问v容器 lambda表达式
    //[]表示函数名 ()参数列表 {}函数体
    for_each(v.begin(),v.end(), [](int val){
        cout<<val<<" ";
    }  );
}
int main(int argc, char *argv[])
{
    test06();
    return 0;
}
