//2022年11月25日18:00:00
#include <iostream>
//i:input(输入)
//o:output(输出)
//stream:流
//类似stdio.h

//#include <string.h>  //旧的风格：老师建议大家都写这个
#include <cstring>   //新的风格：C++用C语言的头文件的风格
using namespace std;
//使用标准的(std)命名空间

//C语言中有且只能有一个主函数，可以有多个其他函数
int main(int argc, char *argv[])
{
    //cout：输出  类似C语言的printf
    //endl: 类似C语言的换行符
    //printf("hello 你好!\n");
    cout << "Hello World!" << endl;
    cout << "你好世界！" << endl;
    //<<表示左箭头，表示将字符串Hello World!输出到控制台

    //cin代表的是输入设备
    int num = 0;
    cin >> num;  //键盘输入的数据赋值给num(右箭头)
    //在C语言中，要想给某个变量进行输入要取地址，但是在C++里面不用
    //C++的重心是让大家写代码，而不是研究代码的核心原理。
    //C++的世界里，基本上遇不到取地址(能用引用的，绝对不用地址)
    //C++帮你把难点给你剥离出来了
    cout << "num =" << num << endl;

    char buf[128] = "";
    strcpy(buf, "hello string");
    cout << buf << endl;
    return 0;
}
