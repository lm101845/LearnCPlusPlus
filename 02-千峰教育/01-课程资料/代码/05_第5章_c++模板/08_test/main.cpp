#include <iostream>
#include<string>
using namespace std;
//类模板
template<class T>
class Base{
private:
    T num;
public:
    Base(T num)
    {
        cout<<"有参构造"<<endl;
        this->num = num;
    }
    ~Base()
    {
        cout<<"析构函数"<<endl;
    }
    void showNum(void)
    {
        cout<<num<<endl;
    }
};

//类模板 派生 普通类 必须给基类 指定T类型
class Son1:public Base<int>{
public:
    Son1(int a):Base<int>(a)
    {
        cout<<"Son1的构造函数"<<endl;
    }
};

class Son2:public Base<string>
{
public:
    Son2(string a):Base<string>(a)
    {
        cout<<"Son2的构造函数"<<endl;
    }
};

int main(int argc, char *argv[])
{
    Son1 ob1(100);
    ob1.showNum();

    Son2 ob2("德玛西亚");
    ob2.showNum();
    return 0;
}
