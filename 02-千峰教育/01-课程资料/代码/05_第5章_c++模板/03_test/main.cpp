#include <iostream>

using namespace std;
class Base
{
    //纯虚析构函数
    virtual ~Base()=0;
};
Base::~Base()
{

}
int main(int argc, char *argv[])
{
    //Base ob;//不能实例化对象
    return 0;
}




