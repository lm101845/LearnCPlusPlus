#include <iostream>
#include<string>
using namespace std;
int myDiv(int a,int b)
{
    if(b == 0)
        return -1;//-1表示失败
    return a/b;
}

void test01()
{
    int ret = myDiv(10,-10);
    if(ret == -1)
    {
        cout<<"程序异常了"<<endl;
    }
    else
    {
        cout<<"程序正常"<<endl;
    }
}

int myDiv01(int a,int b)
{
    if(b==0)
        throw 0;//抛出异常

    return a/b;
}
void test02()
{
    try{
        int ret = myDiv01(10,0);
        cout<<"ret = "<<ret<<endl;
    }
#if 1
    catch(int e)//只捕获 抛出是int类型的异常
    {
        cout<<"捕获到int类型异常 e = "<<e<<endl;
    }
#endif
    catch(float e)//只捕获 抛出是float类型的异常
    {
        cout<<"捕获到float类型异常 e = "<<e<<endl;
    }
    catch(char e)//只捕获 抛出是char类型的异常
    {
        cout<<"捕获到char类型异常 e = "<<e<<endl;
    }
#if 0
    catch(...)
    {
        cout<<"捕获到其他异常"<<endl;
    }
#endif

    cout<<"程序做其他事情"<<endl;
}
class Person{
private:
    string name;
public:
    Person(string name)
    {
        this->name = name;
        cout<<"Person "<<name<<"构造函数"<<endl;
    }
    ~Person()
    {
        cout<<"Person "<<name<<"析构函数"<<endl;
    }
};

void test03()
{
    try{

        Person ob1("00_德玛");
        Person ob2("01_小炮");
        Person ob3("02_小法");
        Person ob4("03_提莫");

        throw 10;
    }
    catch(int)
    {
        cout<<"捕获到int异常"<<endl;
    }
    cout<<"其他工作"<<endl;
}

void testFunc01()
{
    //函数内部可以抛出任何异常
    //throw 10;
    //throw 4.3f;
    //throw 'a';
    //throw "hehe";
    string ob="heihie";
    throw ob;
}

//只能抛出int char 异常
void testFunc02() throw(int,char)
{
    throw 3.14f;
}

//函数 不抛出任何异常
void testFunc03()throw()
{
    throw 10;//外部捕获 不到
}

void test04()
{
    try{
        testFunc03();
    }
    catch(int e)//只捕获 抛出是int类型的异常
    {
        cout<<"捕获到int类型异常 e = "<<e<<endl;
    }
    catch(float e)//只捕获 抛出是float类型的异常
    {
        cout<<"捕获到float类型异常 e = "<<e<<endl;
    }
    catch(char e)//只捕获 抛出是char类型的异常
    {
        cout<<"捕获到char类型异常 e = "<<e<<endl;
    }
    catch(char const *e)//只捕获 抛出是char *类型的异常
    {
        cout<<"捕获到char const *类型异常 e = "<<e<<endl;
    }
    catch(string e)
    {
        cout<<"捕获到string类型异常 e = "<<e<<endl;
    }
}

class MyException
{
public:
    MyException()
    {
        cout<<"异常构造"<<endl;
    }
    MyException(const MyException &ob)
    {
        cout<<"异常拷贝构造"<<endl;
    }
    ~MyException()
    {
        cout<<"异常的析构"<<endl;
    }
};

void test05()
{
    try{

        throw MyException();
    }
    catch(MyException &e)
    {
        cout<<"捕获到MyException &"<<endl;
    }
}

class Person2
{
private:
    int age;
public:
    Person2(int age)
    {
        if(age<0 || age >150)
            throw out_of_range("age无效");
        this->age =age;
    }
};
void test06()
{
    try{
        Person2 ob(200);
    }
    catch(exception &e)
    {
        cout<<"捕获到异常"<<e.what()<<endl;
    }
}
int main(int argc, char *argv[])
{
    test06();
    return 0;
}
