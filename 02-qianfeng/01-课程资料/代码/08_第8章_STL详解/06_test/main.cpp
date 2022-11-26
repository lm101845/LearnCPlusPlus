#include <iostream>
#include<time.h>
using namespace std;

int main(int argc, char *argv[])
{
    //设置随机数种子time(NULL)获取当前时间
    srand(time(NULL));

    for(int i=0;i<10; i++)
    {
        //rand()函数的返回值就是随机数
        int num = rand();
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
