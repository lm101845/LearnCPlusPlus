#include <iostream>
#include <stack>
using namespace std;
/*
3.4.3.1 stack构造函数
stack<T> stkT;//stack采用模板类实现， stack对象的默认构造形式：
stack(const stack &stk);//拷贝构造函数
3.4.3.2 stack赋值操作
stack& operator=(const stack &stk);//重载等号操作符
3.4.3.3 stack数据存取操作
push(elem);//向栈顶添加元素
pop();//从栈顶移除第一个元素
top();//返回栈顶元素
3.4.3.4 stack大小操作
empty();//判断堆栈是否为空
size();//返回堆栈的大小
*/
void test01()
{
    stack<int> s;
    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    if(s.empty())
    {
        cout<<"栈容器为空"<<endl;
    }
    else
    {
        cout<<"栈容器非空"<<endl;
        cout<<"size = "<<s.size()<<endl;
    }

    while(!s.empty())//非空 返回false
    {
       cout<<s.top()<<endl;
       //出栈
       s.pop();
    }
}
/*
3.5.3.1 queue构造函数
queue<T> queT;//queue采用模板类实现，queue对象的默认构造形式：
queue(const queue &que);//拷贝构造函数
3.5.3.2 queue存取、插入和删除操作
push(elem);//往队尾添加元素
pop();//从队头移除第一个元素
back();//返回最后一个元素
front();//返回第一个元素
3.5.3.3 queue赋值操作
queue& operator=(const queue &que);//重载等号操作符
3.5.3.4 queue大小操作
empty();//判断队列是否为空
size();//返回队列的大小
*/
#include<queue>
void test02()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    if(q.empty())
    {
        cout<<"容器为空"<<endl;
    }
    else
    {
        cout<<"容器非空"<<endl;
        cout<<"size = "<<q.size()<<endl;
        cout<<"对头元素 = "<<q.front()<<endl;//10
        cout<<"队尾元素 = "<<q.back()<<endl;//40
    }

    cout<<"遍历队列"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();//出队
    }
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
