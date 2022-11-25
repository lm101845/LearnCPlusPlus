#include <iostream>
#include <cstring>
using namespace std;


class Stu
{
public:
    Stu()
    {

        cout<<this<<"无参构造"<<endl;
    }
    Stu(int n)
    {
        num = n;
        cout<<this<<"int构造"<<endl;
    }
    Stu(const Stu &ob)
    {
        cout<<this<<"拷贝构造"<<endl;
    }
    ~Stu()
    {
        cout<<this<<"析构函数"<<endl;
    }

//private:
    int num;
};
Stu getStu()
{

    Stu stu(100);
    cout<<&stu<<endl;
    return stu;
}
void test01()
{
    Stu stu1=getStu();
    cout<<stu1.num<<endl;
    cout<<&stu1<<endl;
}

int main(int argc, char *argv[])
{
    test01();
    return 0;
}
