#include <iostream>

using namespace std;
class Data
{
private:
    char *m_name;
public:
    //explicit 该有参构造函数 不允许 隐式转换
    explicit Data(char  *name):m_name(name)
    {
        cout<<"有参构造"<<endl;
    }
    ~Data()
    {
        cout<<"析构函数"<<endl;
    }
    void showNum(void)
    {
        m_name[0]='W';
        cout<<"num = "<<m_name<<endl;
    }
};
void test03()
{
    Data ob("hehe");
    ob.showNum();
}
#if 0
void test01()
{
    //隐私转换
    //Data data = 10;//explicit 该有参构造函数 不允许 隐式转换
    Data data(10);//ok
    data.showNum();

    Data ob=Data(10);//ok
    ob.showNum();
}

void test02()
{
    Data *p = (Data *)malloc(sizeof(Data));
    if(p ==NULL)
    {
        cout<<"申请失败"<<endl;
    }

    p->showNum();
    free(p);
}
#endif
int main(int argc, char *argv[])
{
    test03();

    return 0;
}
