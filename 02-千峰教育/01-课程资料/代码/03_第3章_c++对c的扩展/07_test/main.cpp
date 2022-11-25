#include <iostream>

using namespace std;
void test01()
{
   int num = 10;
   int &a = num;//a就是num的别名  a==num

   cout<<"num = "<<num<<endl;//10
   //对a赋值 == 对num赋值
   a=100;
   cout<<"num = "<<num<<endl;//100

   //a是num的别名 所以num和a具有相同的地址空间
   cout<<"a 的地址:"<<&a<<endl;
   cout<<"num 的地址:"<<&num<<endl;
}
void test02()
{
    int arr[5] = {10,20,30,40,50};
    //需求：给arr起个别名
    int (&my_arr)[5] = arr;//my_arr就是数组arr的别名

    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;
}
void test03()
{
    int arr[5] = {10,20,30,40,50};
    //1、用typedef 给数组类型 取个别名
    //TYPE_ARR就是一个数组类型（有5个元素 每个元素位int）
    typedef int TYPE_ARR[5];

    //myArr就是数组arr的别名
    TYPE_ARR &myArr=arr;

    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<myArr[i]<<" ";
    }
    cout<<endl;
}

void my_swap1(int a,int b)
{
    int tmp = a;
    a = b;
    b=tmp;
}
void my_swap2(int *a,int *b)//a=&data1,b =data2;
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void my_swap3(int &a, int &b)//a=data1,b=data2
{
    int tmp = a;
    a = b;
    b= tmp;
}
void test04()
{
    int data1 = 10,data2=20;
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
    //my_swap1(data1,data2);//交换失败
    //my_swap2(&data1,&data2);//交换成功
    my_swap3(data1,data2);//交换成功(推荐)
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
}
//引用作为函数的返回值类型
int& my_data(void)
{
    int num = 100;
    return num;//err 函数返回啥变量 引用就是该变量的别名
    //函数的返回值是引用时  不要返回局部变量
}

int& my_data1(void)
{
    static int num = 200;
    return num;//ok
}
void test05()
{
    //ret是别名 ret是num的别名
    int &ret = my_data();
    //cout<<"ret = "<<ret<<endl;//非法访问内存

    int &ret1 = my_data1();//ret1是num的别名
    cout<<"ret = "<<ret1<<endl;
}

int& my_data2(void)
{
    static int num = 10;
    cout<<"num = "<<num<<endl;

    return num;
}
void test06()
{
    //函数的返回值 作为左值
    my_data2() = 2000;

    my_data2();
}

#include<stdlib.h>
#include<string.h>
void my_str1(char **p_str)//p_str = &str
{
    //*p_str == *&str == str
    *p_str = (char *)calloc(1,32);
    strcpy(*p_str, "hello world");

    return;
}
void my_str2(char* &my_str)//char* &my_str = str;my_str等价str
{
    my_str = (char *)calloc(1,32);
    strcpy(my_str, "hello world");
    return;
}
void test07()
{
    char *str = NULL;
    //需求：封装一个函数 从堆区 给str申请一个空间 并赋值为"hello world"
    //my_str1(&str);
    my_str2(str);
    cout<<"str = "<<str<<endl;
    free(str);
}
typedef struct
{
    int num;
    char name[32];
}STU;
void myPrintSTU1(STU tmp)//普通结构体变量作为形参 开销太大
{
    cout<<sizeof(tmp)<<endl;
    cout<<"学号:"<<tmp.num<<", 姓名:"<<tmp.name<<endl;
}
void myPrintSTU2(const STU &tmp)//STU &tmp=lucy;tmp是lucy的别名 tmp没有开辟独立空间
{
    //tmp.num = 2000;//err 因为tmp为常引用
    cout<<"学号:"<<tmp.num<<", 姓名:"<<tmp.name<<endl;
}
void test08()
{
    STU lucy = {100,"lucy"};

    //需求:定义一个函数 遍历lucy成员(读操作)
    myPrintSTU2(lucy);
}

void test09()
{
    //给常量10取个别名 叫num
    //int &针对的是int ，10是const int类型
    //const int 针对的是const int, 10是const int类型
    const int &num = 10;

    cout<<"num = "<<num<<endl;//10
}
int main(int argc, char *argv[])
{
    test09();
    return 0;
}
