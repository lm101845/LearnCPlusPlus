#include <iostream>
#include"data.h"
using namespace std;

int main(int argc, char *argv[])
{
    Data ob;
    ob.setNum(200);
    cout<<"num = "<<ob.getNum()<<endl;
    return 0;
}
