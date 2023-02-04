#include <iostream>

using namespace std;
class Animal
{
public:
    void sleep(void)
    {
        cout<<"animal 动物在睡觉"<<endl;
    }
};

class Cat:public Animal
{
public:
    void sleep(void)
    {
        cout<<"Cat 猫在睡觉!! 喵喵"<<endl;
    }
};
void test01()
{
    //用基类（指针或引用） 保存 子类对象（向上转换）
    Animal *p = new Cat;
    p->sleep();//调用的是基类的sleep

    Cat cat;
    Animal &ob = cat;
    ob.sleep();//调用的是基类的sleep
}

int main(int argc, char *argv[])
{
    test01();
    return 0;
}
