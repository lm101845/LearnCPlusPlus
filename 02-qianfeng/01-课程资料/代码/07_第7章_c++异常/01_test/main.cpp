#include <iostream>
using namespace std;
void test01()
{
    #if 0
    int data = 0;
    cin>>data;
    cout<<"data = "<<data<<endl;

    char ch;
    cin>>ch;
    cout<<"ch= "<<ch<<endl;

    //获取一个字符
    char ch1 = '\0';
    ch1 = cin.get();//获取一个字符
    cout<<"ch1 = "<<ch1<<endl;

    char name[128]="";
    cin>>name;//遇到空格 回车结束获取
    cout<<"name="<<name<<endl;
    #endif

    char name[128]="";
    cin.getline(name,sizeof(name));//可以获取带空格的字符串
    cout<<"name = "<<name<<endl;
}
void test02()
{
    char name[128]="";
    cin.ignore(2);//忽略前2字节
    cin>>name;
    cout<<"name="<<name<<endl;
}
void test03()
{
    char ch = 0;
    ch = cin.get();
    cout<<"ch = "<<ch<<endl;

    cin.putback(ch);//将ch的字符放回缓冲区

    char name[32]="";
    cin>>name;
    cout<<"name="<<name<<endl;
}
void test04()
{
    char ch=0;
    ch = cin.peek();
    cout<<"偷窥缓冲区的数据为:"<<ch<<endl;

    char name[32]="";
    cin>>name;
    cout<<"name="<<name<<endl;
}
int main(int argc, char *argv[])
{
    test04();
    return 0;
}
