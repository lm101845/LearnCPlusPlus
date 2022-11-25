#include <iostream>

using namespace std;
inline int my_mul(int x,int y)
{
    return x*y;
}
void test01()
{
    cout<<"my_mul = "<<my_mul(10+10,20+20)<<endl;
}
//函数的默认参数 指定x的默认值为10 y为20
int my_add(int x=10,int y=20)
{
    return x+y;
}
void test02()
{
    //如果函数传参 那么各自的默认参数将无效
    cout<<"my_add = "<<my_add(100,200)<<endl;//300

    //如果某个参数未被传参 将启用默认值x=100 y使用默认值20
    cout<<"my_add = "<<my_add(100)<<endl;//120

    //x=10  y=20
    cout<<"my_add = "<<my_add()<<endl;//30
}
//函数的默认参数从左向右
int func01(int x,int y=20,int z=30)
{
    return x+y+z;
}


void test03()
{
    cout<<func01(100,200)<<endl;//330
    cout<<func01(100)<<endl;//150
    //cout<<func01()<<endl;//err x没有设置默认参数 必须传参
}

//分文件 函数定义处的默认参数 是无效的
//建议:分文件是 在声明 给默认参数
extern int func02(int x,int y=25,int z=35);
//extern int func02(int x,int y,int z);//err
void test04()
{
    cout<<func02(100,200)<<endl;//335
    cout<<func02(100)<<endl;//160
}

void func03(int x,int y,int)
{
    cout<<"x = "<<x<<", y = "<<y<<endl;
    return;
}
void test05()
{
    //func03(10,30,"hehe");//err "hehe"和int类型不符
    func03(10,30,40);
}
//同一个作用域  参数个数不同  参数类型不同  参数顺序不同
void myFunc(int a)
{
    cout<<"int的myFunc"<<endl;
}
void myFunc(int a,int b)
{
    cout<<"int,int 的myFunc"<<endl;
}
void myFunc(int a,double b)
{
    cout<<"int , double的myFunc"<<endl;
}
void myFunc(double a,int b)
{
    cout<<"double,int的myFunc"<<endl;
}
/*
int myFunc(double a,int b)//不能重载
{
    cout<<"double,int的myFunc 返回值类型int"<<endl;
}*/
void test06()
{
    myFunc(10);//int
    myFunc(10,20);//int int
    myFunc(10,20.2);//int double
    myFunc(10.1,20);//double int

}

void myFunc02(int a)
{
    cout<<"int的myFunc02"<<endl;
}
void myFunc02(int a,int b=10)//默认参数
{
    cout<<"int,int 的myFunc02"<<endl;
}
void test07()
{
    //myFunc02(int a) 和 myFunc02(int a,int b=10)都能识别
    myFunc02(10);//二义性产生
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
