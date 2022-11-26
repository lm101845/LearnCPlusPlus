//i input 输入  o output输出 stream流 输入输出流头文件（类似stdio.h）
#include <iostream>
//#include<string.h>//旧的风格
#include<cstring>//c++用C语言的头文件的风格
//std(标准) 使用标准的命名空间
using namespace std;

//有且只有一个主函数 可以有多个其他函数
int main(int argc, char *argv[])
{
    //cout 输出 类似 c语言的printf
    //endl 类似 c语言的  换行符
    // printf("Hello 你好!\n");

    //cout代表的输出设备
    cout << "Hello 你好!" << endl;//将字符串输出到 控制台

    //cin代表的是输入设备
    int num =0;
    cin >> num;//将建键盘输入的数据 赋值给 num
    cout<<"num = "<<num<<endl;

    char buf[128]="";
    strcpy(buf,"hello string");
    cout<<buf<<endl;

    return 0;
}
