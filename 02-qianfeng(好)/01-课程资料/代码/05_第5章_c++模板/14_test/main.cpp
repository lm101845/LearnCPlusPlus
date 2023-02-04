#include <iostream>
#include<string>
//include标准是包含头文件 基本上不会包含.cpp
//#include"person.cpp"
#include"person.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    //类模板 会经过两次编译
    //第一次 类模板 本身编译，第二次编译 是类模板的成员调用的时候
    //c++/c 独立文件编译
    //如果 类模板的.cpp和.h分文件 出错的原因 在第二次编译
    //建议.cpp和.h放在一次

    Person<string,int> ob1("德玛西亚", 18);
    ob1.showPerson();
    return 0;
}
