#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//普通函数 作为适配器
void myPrintInt01(int val,int tmp)
{
    cout<<val+tmp<<" ";
}
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //普通函数 需要使用ptr_fun转换成函数适配器
    for_each(v.begin(),v.end(), bind2nd(ptr_fun(myPrintInt01),1000));
    cout<<endl;
}
int myTransInt(int val)
{
    return val;
}
class MyTransInt{
public:
    int operator()(int val)
    {
        return val;
    }
};

void test02()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    //将v1容器的元素 帮运到 v2中
    vector<int> v2;
    //预先：设置v2的大小
    v2.resize(v1.size());

    //transform(v1.begin(),v1.end(),v2.begin(), 搬运方式);
    //transform(v1.begin(),v1.end(),v2.begin(),myTransInt);
    transform(v1.begin(),v1.end(),v2.begin(),MyTransInt());

    for_each(v2.begin(),v2.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
}

#include<string>
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
    bool operator==(const Person &ob)
    {
        if(this->name == ob.name && this->age==ob.age)
            return true;
        return false;
    }
};

void test03()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    vector<int>::iterator ret;
    ret = find(v1.begin(),v1.end(),20);
    if(ret != v1.end())
    {
        cout<<"找到的数据为:"<<*ret<<endl;
    }

    vector<Person> v2;
    v2.push_back(Person("德玛西亚",18));
    v2.push_back(Person("小法",19));
    v2.push_back(Person("小炮",20));
    v2.push_back(Person("牛头",21));

    Person tmp("小炮",20);
    vector<Person>::iterator ret2;
    //对于find寻找自定义数据 需要重载==
    ret2 = find(v2.begin(),v2.end(),tmp);
    if(ret2 != v2.end())
    {
        cout<<"找到的数据name="<<(*ret2).name<<",age="<<(*ret2).age<<endl;
    }

}
bool myGreaterThan20(int val)
{
    return val>20;
}
class MyGreaterThan20{
public:
    bool operator()(int val)
    {
        return val>20;
    }
};

void test04()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    //寻找第一个大于20的数
    vector<int>::iterator ret;
    //ret = find_if(v1.begin(),v1.end(), myGreaterThan20 );
    ret = find_if(v1.begin(),v1.end(), MyGreaterThan20() );
    if(ret != v1.end())
    {
        cout<<"寻找到的数据为:"<<*ret<<endl;
    }
}
void test05()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(50);
    vector<int>::iterator ret;
    //对于普通数据 不需要回调函数
    ret = adjacent_find(v1.begin(),v1.end());
    if(ret != v1.end())
    {
        cout<<"寻找到重复的数据:"<<*ret<<endl;
    }

    vector<Person> v2;
    v2.push_back(Person("德玛西亚",18));
    v2.push_back(Person("小法",19));
    v2.push_back(Person("小法",19));
    v2.push_back(Person("牛头",21));
    vector<Person>::iterator ret2;
    ret2 = adjacent_find(v2.begin(),v2.end());
    if(ret2 != v2.end())
    {
        cout<<"寻找到重复的数据:"<<\
              (*ret2).name<<" "<<(*ret2).age<<endl;
    }
}

void test06()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    bool ret = binary_search(v1.begin(),v1.end(),30);
    if(ret == true)
    {
        cout<<"找到"<<endl;
    }
    else
    {
        cout<<"未找到"<<endl;
    }
}
bool myGreaterThan10(int val)
{
    return val>10;
}
class MyGreaterThan10
{
public:
    bool operator()(int val)
    {
        return val>10;
    }
};
void test07()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(10);

    cout<<count(v1.begin(),v1.end(),10)<<endl;//3

    //普通函数
    cout<<count_if(v1.begin(),v1.end(), myGreaterThan10)<<endl;//2
    //函数对象
    cout<<count_if(v1.begin(),v1.end(), MyGreaterThan10())<<endl;//2
    //内建函数对象
    cout<<count_if(v1.begin(),v1.end(), bind2nd(greater<int>(),10))<<endl;//2
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
