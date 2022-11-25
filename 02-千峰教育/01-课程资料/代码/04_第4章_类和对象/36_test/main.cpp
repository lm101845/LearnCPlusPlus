#include <iostream>

using namespace std;
class Base1
{
public:
    int a;
};
class Base2
{
public:
    int a;
};

class Son:public Base1,public Base2
{

};
int main(int argc, char *argv[])
{
    Son ob;
    //ob.a = 100;//err Base1 和 Base2中都有a成员同名
    //解决办法:加作用域
    ob.Base1::a = 100;
    ob.Base2::a = 200;
    return 0;
}
