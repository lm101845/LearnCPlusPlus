#include <iostream>
#include"myarray.h"
using namespace std;

int main(int argc, char *argv[])
{
    //实例化一个数组对象
    MyArray arr1;
    cout<<"容量:"<<arr1.getCapacity()<<endl;
    cout<<"大小:"<<arr1.getSize()<<endl;

    MyArray arr2(50);
    cout<<"容量:"<<arr2.getCapacity()<<endl;
    cout<<"大小:"<<arr2.getSize()<<endl;

    //往数组中插入20个数据
    int i=0;
    for(i=0;i<20;i++)
    {
        arr2.pushBack(i);
    }
    cout<<"容量:"<<arr2.getCapacity()<<endl;
    cout<<"大小:"<<arr2.getSize()<<endl;

    //遍历数组
    arr2.printMyArray();

    //更改pos=9的值 2000
    arr2.setData(9,2000);
    arr2.printMyArray();

    //得到下标为9的值
    cout<<arr2.getData(9)<<endl;
    return 0;
}
