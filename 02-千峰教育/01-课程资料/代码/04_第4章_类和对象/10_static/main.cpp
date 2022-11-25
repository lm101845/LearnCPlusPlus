#include <iostream>

using namespace std;
class Data
{
public:
    Data()
    {
        cout<<"无参构造"<<endl;
        count++;
    }
    Data(const Data &ob)
    {
        cout<<"拷贝构造函数"<<endl;
        count++;
    }

    ~Data()
    {
        count--;
        cout<<"析构函数"<<endl;
    }

    static int count;
};

int Data::count = 0;

int main(int argc, char *argv[])
{
    Data ob1;
    Data ob2;
    {
        Data ob3;
        Data ob4;
        cout<<"对象的个数:"<<Data::count<<endl;
    }
    cout<<"对象的个数:"<<Data::count<<endl;
    return 0;
}
