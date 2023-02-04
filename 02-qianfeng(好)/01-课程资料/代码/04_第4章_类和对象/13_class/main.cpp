#include <iostream>

using namespace std;

class MyCout
{
public:
    MyCout& myCout(char *str)
    {
        cout<<str;
        return *this;//*this 代表就是 当前调用该函数的对象
    }
};
int main(int argc, char *argv[])
{
    MyCout ob;
    /*
    ob.myCout("hehe");
    ob.myCout("haha");
    ob.myCout("xixi");*/
    ob.myCout("hehe").myCout("haha").myCout("xixi");//ob.myCout("hehe") == ob

    return 0;
}
