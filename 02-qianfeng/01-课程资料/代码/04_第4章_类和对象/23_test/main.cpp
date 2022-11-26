#include <iostream>

using namespace std;
class Person
{
private:
    int a;
    int b;
public:
    Person():a(0),b(0)
    {
        cout<<"无参构造"<<endl;
    }
    Person(int a, int b):a(a),b(b)
    {
        cout<<"有参构造"<<endl;
    }
    void showPerson(void)
    {
        cout<<"a = "<<a<<", b = "<<b<<endl;
    }
    ~Person()
    {
        cout<<"析构函数"<<endl;
    }
};
void test01()
{
    Person ob1(10,20);
    ob1.showPerson();

    //注意 旧对象 给新对象赋值 调用的是拷贝构造（默认拷贝构造就是单纯的赋值）
    Person ob2 = ob1;//这个地方 可不是调用赋值=运算符
    ob2.showPerson();

    Person ob3;
    ob3 = ob1;//此处才是调用的赋值=运算符(默认赋值=运算是浅拷贝)
    ob3.showPerson();
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}












