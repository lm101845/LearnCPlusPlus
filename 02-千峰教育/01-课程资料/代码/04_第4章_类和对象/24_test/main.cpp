#include <iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char *name;//指针成员
public:
    Person()
    {
        name = NULL;
        cout<<"无参构造"<<endl;
    }
    Person(char *name)
    {
        //根据实际传入的 参数 给this->name申请空间
        this->name = new char[strlen(name)+1];

        //将name指向的字符串 拷贝到  this->name指向的空间中
        strcpy(this->name,name);

        cout<<"有参构造"<<endl;
    }
    Person(const Person &ob)//ob代表的就是旧对象
    {
        //this代表的是新对象
        cout<<"拷贝构造函数"<<endl;
        this->name = new char[strlen(ob.name)+1];
        strcpy(this->name, ob.name);
    }


    ~Person()
    {
        cout<<"析构函数"<<endl;
        if(this->name != NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }
    }

    void showPerson(void)
    {
        cout<<"name = "<<name<<endl;
    }
    //成员函数 重载=运算符
    Person& operator=(Person &ob)//ob == ob1
    {
        //this ==>&ob3
        if(this->name != NULL)//说明this->name 以前有指向(重点)
        {
            //释放以前指向的空间
            delete [] this->name;
            this->name = NULL;
        }

        //申请空间
        this->name = new char[strlen(ob.name)+1];
        //拷贝内容
        strcpy(this->name,ob.name);

        return *this;//重点
    }

    //重载==  ==出现在判断语句中
    bool operator==(Person &ob)
    {
        if(strcmp(this->name, ob.name) == 0)
        {
            return true;
        }
        return false;
    }
    //重载!=  !=出现在判断语句中
    bool operator!=(Person &ob)
    {
        if(strcmp(this->name, ob.name) != 0)
        {
            return true;
        }
        return false;
    }
};

void test01()
{
    Person ob1("lucy");
    ob1.showPerson();

    Person ob2 = ob1;//调用拷贝构造

    Person ob3("bob");
    //不重载 = 默认是浅拷贝
    ob3 = ob1;

    ob3.showPerson();

    Person ob6,ob5,ob4;
    ob6 = ob5 = ob4 = ob1;
    ob6.showPerson();
}

void test02()
{
    Person ob1("lucy");
    Person ob2("lucy");
    Person ob3("bob");

    if(ob1 == ob2)
    {
        cout<<"ob1 == ob2"<<endl;
    }
    else
    {
        cout<<"ob1 != ob2"<<endl;
    }

    if(ob1 != ob3)
    {
        cout<<"ob1 != ob3"<<endl;
    }
    else
    {
        cout<<"ob1 == ob3"<<endl;
    }
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
