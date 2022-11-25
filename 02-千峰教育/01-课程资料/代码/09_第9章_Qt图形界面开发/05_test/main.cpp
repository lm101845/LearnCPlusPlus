#include <iostream>

using namespace std;
class Data
{
public:
    void showData()
    {
        cout<<"showdata"<<endl;
    }
    void showData(int a)
    {
        cout<<"showdata int"<<endl;
    }

};
#include<stdio.h>
int main(int argc, char *argv[])
{
    void (Data:: *p1)() = &Data::showData;
    void (Data:: *p2)(int) = &Data::showData;
    printf("p1 = %p\n",p1);
    cout<<(void *)p1<<endl;
    cout<<p1<<endl;

    printf("p2 = %p\n",p2);
    cout<<(void *)p2<<endl;
    cout<<p2<<endl;
    return 0;
}
