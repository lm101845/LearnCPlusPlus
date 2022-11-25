#include "myarray.h"
#include<iostream>
using namespace std;
MyArray::MyArray()
{
    //假如数组的容量为100
    this->capacity = 100;
    //数组的size 为0
    this->size = 0;
    //根据容量 给数组申请空间
    this->addr = new int[this->capacity];
}

MyArray::MyArray(int capacity)
{
    this->capacity = capacity;
    this->size = 0;
    this->addr = new int[this->capacity];
}

MyArray::~MyArray()
{
    if(this->addr != NULL)
    {
        delete [] this->addr;
        this->addr = NULL;
    }
}

void MyArray::pushBack(int data)
{
    if(this->size >= this->capacity)//数组已满
    {
        cout<<"数组已满"<<endl;
        return;
    }
    addr[this->size] = data;
    this->size++;
}

int MyArray::getData(int pos)
{
    if(pos >= this->size || pos < 0)
    {
        cout<<"位置无效"<<endl;
        return -1;
    }

    return addr[pos];
}

void MyArray::setData(int pos, int data)
{
    if(pos >= this->size || pos < 0)
    {
        cout<<"位置过大"<<endl;
        return;
    }
    addr[pos] = data;
    return;
}

int MyArray::getCapacity()
{
    return this->capacity;
}

int MyArray::getSize()
{
    return this->size;
}

void MyArray::printMyArray()
{
    int i=0;
    for(i=0;i<this->size; i++)
    {
        cout<<this->addr[i]<<" ";
    }
    cout<<endl;
}
