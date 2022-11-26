#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
//普通函数作为一元谓词
bool greaterThan20(int val)
{
    return val>20;
}
//仿函数作为一元谓词
class MyGreaterThan20
{
public:
    bool operator()(int val)
    {
        return val>20;
    }
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
    //需求：找出第一个大于20的数
    vector<int>::iterator ret;
    //普通函数完成
    //ret = find_if(v.begin(),v.end(),  greaterThan20);
    ret = find_if(v.begin(),v.end(),  MyGreaterThan20());
    if(ret != v.end())
    {
        cout<<"第一个大于20的数为:"<<*ret<<endl;
    }

}

//普通函数作为二元谓词
bool myGreater(int v1,int v2)
{
    //为啥从大到小 排序
    return v1>v2;
}
//仿函数作为二元谓词
class MyGreater
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};

void test02()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;

    //从大-->小排序
    //sort(v.begin(),v.end(), myGreater);
    sort(v.begin(),v.end(), MyGreater());
    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
}

void test03()
{
    plus<int> p;
    cout<<p(10,20)<<endl;
    cout<<plus<int>()(100,200)<<endl;
}
void test04()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;

    //使用内建函数对象 改变排序规则
    sort(v.begin(),v.end(), greater<int>() );

    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
}
//val 是for_each提供  tmp
//适配器2：公共继承binary_function
//适配器3：参数的萃取
//适配器4：对operator()进行const修饰
class MyPrint:public binary_function<int,int, void>
{
public:
    void operator()(int val,int tmp) const
    {
       cout<<"val="<<val<<", tmp = "<<tmp<<endl;
    }
};

void test05()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //适配器1：bind2nd 或bind1st 绑定参数
    cout<<"bind2nd"<<endl;
    for_each(v.begin(), v.end(), bind2nd(MyPrint(),1000) );
    cout<<endl;

    cout<<"--------------------"<<endl;
    cout<<"bind1st"<<endl;
    for_each(v.begin(), v.end(), bind1st(MyPrint(),1000) );
    cout<<endl;
}
//取反适配器2:public unary_function
//取反适配器3:参数萃取
//取反适配器4:const修饰operator()
class MyGreaterThan3:public unary_function<int,bool>
{
public:
    //一元谓词
    bool operator()(int val)const
    {
        return val>3;
    }
};
void test06()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //找出第一个大于3的数
    vector<int>::iterator ret;
    ret = find_if(v.begin(),v.end(), MyGreaterThan3() );
    if(ret != v.end())
    {
        cout<<"*ret = "<<*ret<<endl;//4
    }

    //找出第一个小于3的数
    //取反适配器1:not1修饰
    ret = find_if(v.begin(),v.end(), not1(MyGreaterThan3()) );
    if(ret != v.end())
    {
        cout<<"*ret = "<<*ret<<endl;//4
    }
}
class MyGreaterInt:public binary_function<int,int,bool>
{
public:
    bool operator ()(int v1,int v2)const
    {
        return v1>v2;
    }
};
void test07()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);

    for_each(v.begin(),v.end(), [](int v){cout<<v<<" ";});
    cout<<endl;

    //默认小--->大
    //sort(v.begin(),v.end());
    //更改排序规则大-->小
    //sort(v.begin(),v.end(), MyGreaterInt());
    //使用not2对MyGreaterInt()取反  小--->大
    //sort(v.begin(),v.end(), not2(MyGreaterInt()));
    //使用not2对内建函数取反
    sort(v.begin(),v.end(), not2(greater<int>()));
    //sort(v.begin(),v.end(), less<int>());
    for_each(v.begin(),v.end(), [](int v){cout<<v<<" ";});
    cout<<endl;
}
class Person
{
public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }
    void showPerson()
    {
        cout<<"name = "<<this->name<<",age="<<this->age<<endl;
    }
};
void myPrintPerson(Person &ob)
{
    cout<<"name = "<<ob.name<<",age="<<ob.age<<endl;
}
void test08()
{
    vector<Person> v;
    v.push_back(Person("德玛西亚",18));
    v.push_back(Person("狗头",28));
    v.push_back(Person("牛头",19));
    v.push_back(Person("小法",38));

    //遍历 myPrintPerson普通函数
    //for_each(v.begin(),v.end(), myPrintPerson );
    //遍历  Person成员函数
    //利用 mem_fun_ref 将Person内部成员函数适配
    for_each(v.begin(),v.end(), mem_fun_ref(&Person::showPerson) );
}
int main(int argc, char *argv[])
{

    test08();
    return 0;
}
