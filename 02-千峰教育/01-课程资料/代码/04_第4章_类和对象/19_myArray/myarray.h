#ifndef MYARRAY_H
#define MYARRAY_H


class MyArray
{
private:
    int capacity;//数组总共能存放的元素个数
    int size;//数组实际存放的元素个数
    int *addr;//数组首元素地址
public:
    MyArray();
    MyArray(int capacity);
    ~MyArray();

    //往数组的尾部插入数据
    void pushBack(int data);
    //获得指定位置的数据
    int getData(int pos);
    //修改指定位置的值
    void setData(int pos,int data);
    //获取数组的容量（能存放的最大元素个数）
    int getCapacity(void);
    //获取数组的实际大小(实际元素的个数)
    int getSize(void);
    void printMyArray(void);
};

#endif // MYARRAY_H
