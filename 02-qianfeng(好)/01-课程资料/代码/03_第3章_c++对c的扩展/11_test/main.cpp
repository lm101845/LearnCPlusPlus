#include <iostream>

using namespace std;
class Person//抽象的概念
{//类的内部
private:
    int m_money;//私有数据
protected:
    int m_age;
public:
    void dese()
    {
        m_money = 100;
        m_age = 18;
        cout<<"我有房 有车 又年轻"<<m_age<<"岁又有钱"<<m_money<<"万美金 我就爱嘚瑟"<<endl;

    }
};
void test01()
{
    //用类 去 实例化 一个对象（就是用Person定义一个变量）
    Person lucy;
    cout<<"兄弟你的钱:"<<lucy.m_money<<endl;//err 内的外部不可访问
    //cout<<"兄弟你的年龄:"<<lucy.m_age<<endl;//err 内的外部不可访问

    lucy.dese();//ok 公有的类的外部可用访问
    //private protected虽然是私有、保护的 类外不可访问 但是用户可以借助 public公有的方法
    //间接的访问私有、保护的数据
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
