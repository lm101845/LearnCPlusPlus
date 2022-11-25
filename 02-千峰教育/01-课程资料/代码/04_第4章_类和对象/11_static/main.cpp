#include <iostream>

using namespace std;
class Printer
{
public:
    //2、提供一个方法 获得单例指针
    static Printer* getSignlePrint(void)
    {
        return signlePrint;
    }

    //4、设置功能函数(自定义)
    void printText(char *str)
    {
        cout<<"打印"<<str<<endl;
        count++;

    }
    int count;
private:
    //1、定义一个静态的 对象指针变量 保存唯一实例地址
    static Printer *signlePrint;
private:
    //3、防止 该类实例化其他对象 将构造函数全部 私有
    Printer(){count=0;}
    Printer(const Printer &ob){}

};
Printer *Printer::signlePrint = new Printer;

int main(int argc, char *argv[])
{
    //打印任务1
    Printer *p1 = Printer::getSignlePrint();
    p1->printText("入职报告1");
    p1->printText("体检报告2");
    p1->printText("离职证明3");

    //打印任务2
    Printer *p2 = Printer::getSignlePrint();
    p2->printText("入职报告1");
    p2->printText("体检报告2");
    p2->printText("离职证明3");

    cout<<"打印任务数量:"<<p2->count<<endl;//6

    return 0;
}
