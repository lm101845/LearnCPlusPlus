#include <iostream>

using namespace std;
void test01()
{
    //基本类型
    int *p = NULL;
    //p = (int *)calloc(1,sizeof(int));
    p = new int;
    *p = 100;
    cout<<"*p = "<<*p<<endl;//100
    //释放 free(p)
    delete p;
}
void test02()
{
    //申请 int数组
    int *arr = NULL;
    //arr = (int *)calloc(5,sizeof(int));
    arr = new int[5];//申请空间的时候 内容没有初始化 值随机

    int i=0;
    for(i=0;i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //释放 new时加了[]  delete必须加[]
    delete [] arr;
}
void test03()
{
    //申请 int数组
    int *arr = NULL;
    //arr = (int *)calloc(5,sizeof(int));
    arr = new int[5]{1,2,3,4,5};//申请空间的时候 内容没有初始化 值随机

    int i=0;
    for(i=0;i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete [] arr;
}
#include<string.h>
void test04()
{
    //char *arr = new char[32]{"hehe"};//错误
    char *arr = new char[32];
    strcpy(arr,"hehe");
    cout<<arr<<endl;
    delete [] arr;
}

class Person
{
private:
    char m_name[32];
    int m_num;
public:
    Person()
    {
        cout<<"无参构造"<<endl;
    }
    Person(char *name,int num)
    {
        strcpy(m_name, name);
        m_num = num;
        cout<<"有参构造"<<endl;
    }
    ~Person()
    {
        cout<<"析构函数"<<endl;
    }
    void showPerson()
    {
        cout<<"name = "<<m_name<<", num = "<<m_num<<endl;
    }
};
void test06()
{
    //对象数组 arr1是数组 每个元素是Person类型的对象
    //定义对象数组的时候 系统会自动给 数组中的每个元素 调用构造函数
    //自动调用无参构造
    Person arr1[5];

}
void test07()
{
    //对象数组 arr1是数组 每个元素是Person类型的对象
    //定义对象数组的时候 系统会自动给 数组中的每个元素 调用构造函数
    //人为 为元素 调用有参构造
    //初始化部分 调用有参构造 为初始化部分自动调用默认构造
    Person arr1[5]={ Person("lucy",18), Person("bob",20)};
    //arr1[0] 第0个元素 就是Person的对象
    arr1[0].showPerson();
    arr1[1].showPerson();

}
void test05()
{
    //new 按照Person申请空间  如果申请成功 就会 自动调用Person类的构造函数
    Person *p = new Person("lucy",100);

    //由于p是指针 所以使用->  如果p是普通对象 使用.
    p->showPerson();

    //delete 先调用析构函数  再释放堆区空间
    delete p;
}

void test08()
{
    //第一种方式
    Person *arr = NULL;
    arr = new Person[5];//调用无参构造

    delete [] arr;

    //第二种方式：
    //初始化的元素 调用有参构造 没有初始化 的调用无参构造
    Person *arr2 = new Person[5]{Person("lucy",18), Person("bob",20)};
    (*(arr2+0)).showPerson();
    arr2[0].showPerson();
    (arr2+1)->showPerson();
    delete [] arr2;
}

void test09()
{
    Person *p = new Person("lucy",18);
    p->showPerson();

    void *p1 = p;

    delete p;

}
void test10()
{
    Person ob1;
}
int main(int argc, char *argv[])
{
    test09();
    return 0;
}
