#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Person
{
private:
    char *m_name;
    int m_num;
public:
    Person()
    {
        m_name = NULL;
        m_num = 0;
        cout<<"无参构造"<<endl;
    }
    Person(char *name,int num)
    {
        //为m_name申请空间
        m_name = (char *)calloc(1,strlen(name)+1);
        if(m_name == NULL)
        {
            cout<<"构造失败"<<endl;
        }
        cout<<" 已经申请好空间"<<endl;
        strcpy(m_name,name);
        m_num = num;
        cout<<"有参构造"<<endl;
    }

    Person(const Person &ob)//ob==>lucy
    {
        cout<<"拷贝构造函数"<<endl;
        m_name = (char *)calloc(1, strlen(ob.m_name)+1);
        cout<<"空间已被申请"<<endl;
        strcpy(m_name, ob.m_name);

        m_num = ob.m_num;
    }

    ~Person()
    {
        if(m_name != NULL)
        {
            cout<<"空间已被释放"<<endl;
            free(m_name);
            m_name = NULL;
        }
        cout<<"析构函数"<<endl;
    }

    void showPerson(void)
    {
        cout<<"m_name = "<<m_name<<", m_num = "<<m_num<<endl;
    }
};

void test01()
{
    Person lucy("lucy",100);
    lucy.showPerson();

    //浅拷贝的问题（多次释放同一块堆区空间）
    //通过自定义 拷贝构造函数 完成深拷贝动作
    Person bob = lucy;//调用系统的默认拷贝构造（单纯的值拷贝）
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
