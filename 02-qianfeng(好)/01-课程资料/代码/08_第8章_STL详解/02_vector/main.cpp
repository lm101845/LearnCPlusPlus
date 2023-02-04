#include <iostream>
#include<vector>
using namespace std;
void test01()
{
    vector<int> v;
    int i=0;
    for(i=0;i<100;i++)
        v.push_back(i);

    cout<<"v的容量capacity:"<<v.capacity()<<endl;
    cout<<"v的大小size:"<<v.size()<<endl;
}
void test02()
{
    vector<int> v;
    int *p=NULL;
    int count = 0;//记录另寻地址的次数

    for(int i=0;i<1000;i++)
    {
        v.push_back(i);
        if(p != &v[0])//如果p不等于&v[0] 说明另寻了新的空间
        {
            count++;
            p = &v[0];
        }
    }

    cout<<"另寻地址的次数："<<count<<endl;
}

void test03()
{
    vector<int> v;
    int *p = NULL;
    int count =0;
    for(int i=0;i<1000;i++)
    {
        if(p != &v[0])
        {
            cout<<"----------"<<count++<<"-----"<<endl;
            p=&v[0];
        }

        v.push_back(i);
        cout<<"cacapity = "<<v.capacity()<<", size = "<<v.size()<<endl;
    }
}
/*
3.2.4.1 vector构造函数
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem);//构造函数将n个elem拷贝给本身。
vector(const vector &vec);//拷贝构造函数。
*/
void printVectorInt(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test04()
{
    //vector(n, elem);//构造函数将n个elem拷贝给本身
    vector<int> v1(10,5);
    printVectorInt(v1);

    //vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身
    vector<int> v2(v1.begin()+2, v1.end()-2);
    printVectorInt(v2);

    vector<int> v3(v1);
    printVectorInt(v3);
}
int main(int argc, char *argv[])
{
    test04();
    return 0;
}
