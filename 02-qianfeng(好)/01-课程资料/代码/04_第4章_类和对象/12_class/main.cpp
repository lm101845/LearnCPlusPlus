#include <iostream>

using namespace std;
class Data
{
public:
    int num;

    //形参 和成员名相同
    void setNum(int num)
    {
        //形参num
        //成员num  this->num
        //num= num;//就近原则 形参num 赋值给 形参num
        this->num = num;
        //将形参num 赋值给 对象中成员num
    }

};

void test01()
{
    Data ob1;
    ob1.setNum(10);
    cout<<"ob1.m_num = "<<ob1.num<<endl;

    Data ob2;
    ob2.setNum(20);
    cout<<"ob2.m_num = "<<ob2.num<<endl;

    Data ob3;
    ob3.setNum(30);
    cout<<"ob3.m_num = "<<ob3.num<<endl;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
