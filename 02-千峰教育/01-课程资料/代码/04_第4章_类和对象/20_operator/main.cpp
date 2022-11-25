#include <iostream>
#include<string.h>
using namespace std;
class Person
{
    //设置成友元函数 在函数内 访问Person类中的所有数据
    friend ostream& operator<<(ostream &out, Person &ob);
private:
    char *name;
    int num;
public:
    Person()
    {
        this->name = NULL;
        this->num = 0;
        cout<<"无参构造"<<endl;
    }
    Person(char *name, int num)
    {
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        this->num = num;
        cout<<"有参构造"<<endl;
    }
    //成员函数 完成运算符重载 ob1用this代替 ob2用参数ob代替
    Person operator+(Person &ob)
    {
        //this ==> &ob1

        //name+name(字符串追加)
        char *tmp_name = new char[strlen(this->name)+strlen(ob.name)+1];
        strcpy(tmp_name,this->name);
        strcat(tmp_name,ob.name);

        //num+num（数值相加）
        int tmp_num = this->num+ob.num;
        Person tmp(tmp_name, tmp_num);

        //释放tmp_name的空间
        if(tmp_name != NULL)
        {
            delete [] tmp_name;
            tmp_name = NULL;
        }

        return tmp;
    }

    //普通的成员函数
    void printPerson(void)
    {
        cout<<"name = "<<name<<", num = "<<num<<endl;
    }
    ~Person()
    {
        if(this->name != NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }
        cout<<"析构函数"<<endl;
    }
};

//全局函数作为友元 完成运算符重载<<
ostream& operator<<(ostream &out, Person &ob)//out=cout, ob =ob1
{
    //重新实现 输出格式
    out<<ob.name<<", "<<ob.num;

    //每次执行为 返回值得到cout
    return out;
}

void test03()
{
    Person ob1("lucy",18);
    Person ob2("bob", 19);

    //Person ob3 = ob1.operator+(ob2);
    Person ob3 = ob1+ob2;
    cout<<ob3<<endl;
}
int main(int argc, char *argv[])
{
    test03();

    return 0;
}
