#include <iostream>
#include <vector>
using namespace std;
/*
3.2.4.2 vector常用赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
vector& operator=(const vector  &vec);//重载等号操作符
swap(vec);// 将vec与本身的元素互换。
*/
void printVectorInt(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    vector<int> v1(5,10);
    vector<int> v2;

    //vector& operator=(const vector  &vec);//重载等号操作符
    v2 = v1;
    printVectorInt(v2);

    //assign(n, elem);//将n个elem拷贝赋值给本身
    vector<int> v3;
    v3.assign(5,100);
    printVectorInt(v3);

    //assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身
    vector<int> v4;
    v4.assign(v3.begin(), v3.end());
    printVectorInt(v4);

    //swap(vec);// 将vec与本身的元素互换。
    vector<int> v5(5,20);
    vector<int> v6(10,40);
    printVectorInt(v5);
    printVectorInt(v6);
    v5.swap(v6);
    printVectorInt(v5);
    printVectorInt(v6);
}
/*
3.2.4.3 vector大小操作
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长>度的元素被删除。
capacity();//容器的容量
reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问
*/
void test02()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    if(v.empty())
    {
        cout<<"v容器为空"<<endl;
    }
    else
    {
        cout<<"容器非空"<<endl;
        cout<<"size = "<<v.size()<<endl;
        cout<<"capacity = "<<v.capacity()<<endl;
        //容量 >= size
    }

    printVectorInt(v);//10 20 30 40
    //resize(int num);//重新指定容器的长度为num
    //多出的部分 自动补0
    v.resize(8);
    printVectorInt(v);//10 20 30 40 0 0 0 0

    //resize(int num, elem);//重新指定容器的长度为num，
    //若容器变长，则以elem值填充
    v.resize(10,5);
    printVectorInt(v);//10 20 30 40 0 0 0 0 5 5

    v.resize(2);
    printVectorInt(v);//10 20
}

void test03()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    cout<<"size = "<<v.size()<<endl;
    cout<<"capactiy = "<<v.capacity()<<endl;
    printVectorInt(v);

    cout<<"----------------"<<endl;
    v.resize(2);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capactiy = "<<v.capacity()<<endl;
    printVectorInt(v);
}

void test04()
{
    vector<int> v;
    for(int i=0;i<1000;i++)
    {
        v.push_back(i);
    }
    cout<<"size = "<<v.size()<<endl;//1000
    cout<<"capactiy = "<<v.capacity()<<endl;//1024

    //使用reszie将空间 置成10个元素（可以吗?）
    v.resize(10);//不能修改容量 只能修改size
    cout<<"size = "<<v.size()<<endl;//10
    cout<<"capactiy = "<<v.capacity()<<endl;//1024

    //使用swap收缩容器的容量
    vector<int>(v).swap(v);

    cout<<"size = "<<v.size()<<endl;//10
    cout<<"capactiy = "<<v.capacity()<<endl;//10
}

//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问
void test05()
{
    vector<int> v;

    //一次性 给够空间 叫空间预留
    v.reserve(1000);//预留空间 1000个元素

    int *p = NULL;
    int count = 0;
    for(int i=0;i<1000;i++)
    {
        v.push_back(i);
        if(p != &v[0])
        {
            count++;
            p = &v[0];
        }
    }
    cout<<"重新另寻空间次数:"<<count<<endl;
}
/*
3.2.4.4 vector数据存取操作
at(int idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_range异常。
operator[];//返回索引idx所指的数据，越界时，运行直接报错
front();//返回容器中第一个数据元素
back();//返回容器中最后一个数据元素
*/
void test06()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    printVectorInt(v);//10 20 30 40
    cout<<v[2]<<endl;//30
    cout<<v.at(2)<<endl;//30
    //[] 越界 不抛出异常
    //at 越界 抛出异常

    cout<<"front = "<<v.front()<<endl;//10
    cout<<"back = "<<v.back()<<endl;//40
}
/*
3.2.4.5 vector插入和删除操作
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele.
push_back(ele); //尾部插入元素ele
pop_back();//删除最后一个元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
erase(const_iterator pos);//删除迭代器指向的元素
clear();//删除容器中所有元素
*/
void test07()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    printVectorInt(v);//10 20 30 40

    //insert(const_iterator pos, int count,ele);
    //迭代器指向位置pos插入count个元素ele.
    v.insert(v.begin()+2,3,100);
    printVectorInt(v);//10 20 100 100 100 30 40

    //尾部删除：pop_back();//删除最后一个元素
    v.pop_back();//将40删除了
    printVectorInt(v);//10 20 100 100 100 30

    //erase(const_iterator start, const_iterator end);
    //删除迭代器从start到end之间的元素
    v.erase(v.begin()+2, v.end()-1);
    printVectorInt(v);//10 20 30

    //erase(const_iterator pos);//删除迭代器指向的元素
    v.erase(v.begin()+1);//删除20的位置
    printVectorInt(v);//10 30

    cout<<"size = "<<v.size()<<", capacity = "<<v.capacity()<<endl;

    //clear();//删除容器中所有元素
    v.clear();
    printVectorInt(v);//啥也没有
    cout<<"size = "<<v.size()<<", capacity = "<<v.capacity()<<endl;
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
