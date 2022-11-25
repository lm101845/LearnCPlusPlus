#include <iostream>

using namespace std;
class Animal
{
public:
    int data;
};

//Sheep虚继承Animal   其中Animal 虚基类
class Sheep:virtual public Animal
{
public:
};
//Tuo虚继承Animal 其中Animal 虚基类
class Tuo:virtual public Animal
{
public:
};

class SheepTuo:public Sheep,public Tuo
{
public:
};
int main(int argc, char *argv[])
{
    SheepTuo st;
    st.data = 200;

    //通过Sheep的vbptr 寻找vbptr距离虚基类首地址的偏移量
    //&st == vbptr
    //*(int *)&st sheep 的虚基类表的起始位置
    int off_set = (int)*((int*)(*(int*)&st) + 1);
    cout << off_set << endl;

    //通过sheep的vbptr 和 off_set定位虚基类的首地址
    cout << ((Animal*)((char*)&st + off_set))->data << endl;

    return 0;
}
