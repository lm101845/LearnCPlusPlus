#include <iostream>

using namespace std;

void mySwap(int &a,int &b)
{
    cout<<"普通函数"<<endl;
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
void mySwap(T &a,T &b)
{
    cout<<"函数模板"<<endl;
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void test01()
{
    int data1 = 10,data2 = 20;
    //函数模板和普通函数 都识别  优先选择普通函数
    mySwap(data1,data2);

    //函数模板和普通函数 都识别  选择函数模板 加<>
    mySwap<>(data1,data2);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
