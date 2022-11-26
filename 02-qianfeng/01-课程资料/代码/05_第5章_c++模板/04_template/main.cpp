#include <iostream>
using namespace std;

void swapInt(int &a,int &b)
{
    int tmp= a;
    a = b;
    b = tmp;
    return;
}
void swapChar(char &a,char &b)
{
    char tmp= a;
    a = b;
    b = tmp;
    return;
}

void test01()
{
    int data1 = 10,data2=20;
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
    swapInt(data1,data2);
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;


    char data3 = 'a',data4='b';
    cout<<"data3 = "<<data3<<", data4 = "<<data4<<endl;
    swapChar(data3,data4);
    cout<<"data3 = "<<data3<<", data4 = "<<data4<<endl;


}

//函数模板 template是关键字
//class 和 typename一样的
//T 系统自动推导 或 用户指定
template<typename T>
void mySwap(T &a,T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void test02()
{
    int data1 = 10,data2=20;
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
    mySwap(data1,data2);//自动推导出T为int
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;


    char data3 = 'a',data4='b';
    cout<<"data3 = "<<data3<<", data4 = "<<data4<<endl;
    mySwap(data3,data4);//自动推导出T为char
    cout<<"data3 = "<<data3<<", data4 = "<<data4<<endl;
}

void test03()
{
    int data1 = 10,data2=20;
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
    //用户显示指定 T为int
    mySwap<int>(data1,data2);
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
