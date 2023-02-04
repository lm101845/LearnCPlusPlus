#include <iostream>

using namespace std;
class cat{
public:
    void sleep(int a)
    {
        cout<<"int"<<endl;
    }
    void sleep(int a,int b)
    {
        cout<<"int"<<endl;
    }
};
int main(int argc, char *argv[])
{
    void (cat:: *p1)(int) = &cat::sleep;
    void (cat:: *p2)(int,int) = &cat::sleep;

    cout<<"p1 = "<<(void *)p1<<endl;
    cout<<"p2 = "<<(void *)p2<<endl;

    ((void (cat:: *)(int))p1)(10);
    return 0;
}
