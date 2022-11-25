#include <iostream>

using namespace std;
class Data
{
private:
    //成员数据 占类的空间大小
    int num;//4B
public:

    //成员函数 在类内 声明 类外定义
    void setNum(int data);
    int getNum(void);
};

//Data类的成员函数
void Data::setNum(int data)
{
    num = data;
}

int Data::getNum()
{
    return num;
}

void test01()
{
    printf("%d\n",sizeof(Data));//4B

    Data ob;
    ob.setNum(100);
    cout<<"num = "<<ob.getNum()<<endl;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
