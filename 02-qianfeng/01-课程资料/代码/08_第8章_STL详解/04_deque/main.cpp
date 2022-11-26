#include <iostream>
#include <deque>
using namespace std;

/*
3.3.3.1 deque构造函数
deque<T> deqT;//默认构造形式
deque(beg, end);//构造函数将[beg, end)区间中的元素拷贝给本身。
deque(n, elem);//构造函数将n个elem拷贝给本身。
deque(const deque &deq);//拷贝构造函数。
3.3.3.2 deque赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
deque& operator=(const deque &deq); //重载等号操作符
swap(deq);// 将deq与本身的元素互换
*/
void printDequeInt(deque<int> &d)
{
    for(deque<int>::iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    deque<int> d(5,10);
    printDequeInt(d);//10 10 10 10 10

    //assign(n, elem);//将n个elem拷贝赋值给本身。
    deque<int>  d1;
    d1.assign(5,100);
    printDequeInt(d1);//100 100 100 100 100

    //deque& operator=(const deque &deq); //重载等号操作符
    deque<int>  d2;
    d2 = d1;
    printDequeInt(d2);//100 100 100 100 100

    //swap(deq);// 将deq与本身的元素互换
    deque<int> d3(5,1);
    deque<int> d4(5,2);
    printDequeInt(d3);//1 1 1 1 1
    printDequeInt(d4);//2 2 2 2 2
    d3.swap(d4);
    printDequeInt(d3);//2 2 2 2 2
    printDequeInt(d4);//1 1 1 1 1
}
/*
3.3.3.3 deque大小操作
deque.size();//返回容器中元素的个数
deque.empty();//判断容器是否为空
deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置,如果容器变短，则末尾超出容器长度的元素被删除。
3.3.3.4 deque双端插入和删除操作
push_back(elem);//在容器尾部添加一个数据
push_front(elem);//在容器头部插入一个数据
pop_back();//删除容器最后一个数据
pop_front();//删除容器第一个数据
3.3.3.5 deque数据存取
at(idx);//返回索引idx所指的数据，如果idx越界，抛出out_of_range。
operator[];//返回索引idx所指的数据，如果idx越界，不抛出异常，直接出错。
front();//返回第一个数据。
back();//返回最后一个数据
*/
void test02()
{
    deque<int> d;
    //尾部插入
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);//10 20 30

    //头部插入
    d.push_front(40);
    d.push_front(50);
    d.push_front(60);
    printDequeInt(d);//60 50 40 10 20 30

    //头部删除
    d.pop_front();//50 40 10 20 30
    //尾部删除
    d.pop_back();//50 40 10 20
    printDequeInt(d);//50 40 10 20

    if(d.empty())
    {
        cout<<"d容器为空"<<endl;
    }
    else
    {
        cout<<"d容器非空"<<endl;
        cout<<"size = "<<d.size()<<endl;//4
    }

    //[]访问第二个元素
    cout<<"d[2] = "<<d[2]<<endl;//10
    cout<<"d.at(2) = "<<d.at(2)<<endl;//10
    cout<<"头元素 = "<<d.front()<<endl;//50
    cout<<"尾元素 = "<<d.back()<<endl;//20
}
/*
3.3.3.6 deque插入操作
insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
3.3.3.7 deque删除操作
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置
*/

void test03()
{
    deque<int> d;
    d.insert(d.begin(),5, 100);
    printDequeInt(d);//100 100 100 100 100

    d.clear();
    cout<<"size = "<<d.size()<<endl;//0
}
int main(int argc, char *argv[])
{
    test03();
    return 0;
}
