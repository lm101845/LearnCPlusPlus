#include <iostream>
#include<string>
using namespace std;
//类模板
template<class T1, class T2>
class Data
{
    friend void addData(Data<string,int> &ob);
private:
    T1 name;
    T2 num;
public:
    Data(T1 name, T2 num)
    {
        this->name = name;
        this->num = num;
        cout<<"有参构造"<<endl;
    }
    ~Data()
    {
        cout<<"析构函数"<<endl;
    }
    void showData(void)
    {
        cout<<"name="<<this->name<<", num="<<this->num<<endl;
    }
};

void test01()
{
    //Data ob1("德玛西亚",100);//err 类模板不允许 类型推导
    Data<string,int> ob1("德玛西亚",100);
    ob1.showData();

    Data<int,string> ob2(200, "提莫");
    ob2.showData();

    Data<int,int> ob3(100,200);
    ob3.showData();

    Data<string,string> ob4("小炮","德玛");
    ob4.showData();
}

void addData(Data<string,int> &ob)
{cout<<"-普通函数---"<<endl;
    ob.name += "_vip";
    ob.num += 2000;
    return;
}

void test02()
{
    Data<string,int> ob("德玛西亚",18);
    addData(ob);
    ob.showData();
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
