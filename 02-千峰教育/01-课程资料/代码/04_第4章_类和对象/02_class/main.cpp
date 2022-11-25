#include <iostream>

using namespace std;

class Data
{
public:
    int num;
public:
    //构造函数(无参的构造)
    Data()
    {
        num = 0;
        cout<<"无参的构造函数 num = "<<num<<endl;
    }
    //构造函数（有参的构造）
    Data(int n)
    {
        num = n;
        cout<<"有参的构造函数 num = "<<num<<endl;
    }
    //拷贝构造函数
    Data(const Data &ob)//const Data &ob = ob1
    {
        //拷贝构造函数 是ob2调用 num就是ob2的num
        //ob2.num = ob1.num
        num = ob.num;
        cout<<"拷贝构造"<<endl;
    }

    //析构函数
    ~Data()
    {
        cout<<"析构函数 num = "<<num<<endl;
    }

};
void test01()
{
    //类实例化对象 系统自定调用构造函数
    Data ob;

    //函数结束的时候 局部对象ob 被释放 系统自动调用析构函数
}
void test02()
{
    //调用无参 或 默认构造 (隐式调用)
    Data ob1;
    //调用无参构造 （显示调用）
    Data ob2 = Data();

    //调用有参构造（隐式调用）
    Data ob3(10);
    //调用有参构造（显示调用）
    Data ob4 = Data(20);

    //隐式转换的方式 调用有参构造（针对于 只有一个数据成员）（尽量别用)
    Data ob5 = 30;//转化成Data ob5(30)

    //匿名对象(当前语句结束 匿名对象立即释放)
    Data(40);
    cout<<"------"<<endl;
}

void test03()
{
    Data ob1(10);
    cout<<"ob1.num = "<<ob1.num<<endl;

    //调用拷贝构造函数（如果用户  不实现拷贝构造 系统将调用默认的拷贝构造）
    //默认的拷贝构造:单纯的整体赋值（浅拷贝）
    //如果用户实现了 拷贝构造 系统将调用用户实现的拷贝构造

    Data ob2(ob1);//隐式调用拷贝构造函数
    cout<<"ob2.num = "<<ob2.num<<endl;

    Data ob3 = Data(ob1);//显示调用拷贝构造函数
    cout<<"ob3.num = "<<ob3.num<<endl;

    Data ob4 = ob1;//=隐式转换调用
    cout<<"ob4.num = "<<ob4.num<<endl;
}
void test04()
{
    Data ob1(10);//调用有参构造
    Data ob2;//调用无参构造

    ob2 = ob1;//对象的赋值

    cout<<"ob1.num = "<<ob1.num<<endl;
    cout<<"ob2.num = "<<ob2.num<<endl;
}

void test05()
{
    Data ob1(10);//有参构造

    //调用不了拷贝构造 错
    //Data(ob1);//Data(ob1) ==> Data ob1; 造成ob1重定义
}
//函数的形参 是在函数调用的时候 开辟空间
//此处的ob 就会调用拷贝构造
void myPrintData(Data ob)//Data ob = ob1;
{
    cout<<" num = "<<ob.num<<endl;
}

void test06()
{
    Data ob1(10);

    myPrintData(ob1);
}

Data returnData(void)
{
    cout<<"---001---"<<endl;
    Data ob1(10);//有参构造
    cout<<"---002---"<<endl;

    return ob1;
}

void test07()
{
    Data ob2 = returnData();
    cout<<"ob2.num = "<<ob2.num<<endl;

}

void test08()
{
    //不会 认为是实例化对象ob1 而是看成函数ob1声明
    Data ob1();
}
int main(int argc, char *argv[])
{
    test08();
    return 0;
}
