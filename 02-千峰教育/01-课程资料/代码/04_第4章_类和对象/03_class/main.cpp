#include <iostream>

using namespace std;
class Data
{
public:
    int num;
public:
    Data(int n)
    {
        num = n;
        cout<<"有参的构造函数"<<endl;
    }
    Data(const Data &ob)
    {
        cout<<"拷贝构造函数"<<endl;
    }
    //析构函数
    ~Data()
    {
        cout<<"析构函数 num = "<<num<<endl;
    }

};

void test01()
{
    Data ob1(10);
    Data ob2 = ob1;
    cout<<"ob2.num = "<<ob2.num<<endl;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
