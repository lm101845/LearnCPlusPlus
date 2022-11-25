#include <iostream>
#include"fun.h"
using namespace std;
//c语言的思想:数据  方法 分开
//人
typedef struct
{
    char name[32];
    int age;
}Person;

//动物
typedef struct
{
    char name[32];
    int age;
    int type;
}Dog;

void PersonEat(Person *p)
{
    cout<<p->name<<"正在吃饭"<<endl;
}
void DogEat(Dog *d)
{
    cout<<d->name<<"正在吃狗粮, 汪汪"<<endl;
}

void test01()
{
    Person person = {"老王",43};
    Dog dog={"旺财",6};

    PersonEat(&person);
    DogEat(&dog);

    // 出现一个问题（数据 方法独立  容易造成 方法 调用错误数据）
    DogEat((Dog *)&person);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
