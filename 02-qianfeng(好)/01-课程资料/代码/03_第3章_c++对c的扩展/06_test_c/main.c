#include <stdio.h>
struct stu
{
    int num;
    char name[32];
/* c语言 不允许在结构体中  定义成员函数
    void func(void)
    {
        printf("我是结构体中的func");
    }
    */
};
void test01()
{
    //C语言必须加struct
    struct stu lucy = {100, "lucy"};
}

void test02()
{
    int a = 10;
    int b = 20;
    printf("C语言:%d\n", a>b?a:b);//20

    //a>b?a:b整体结果 右值（不能被赋值）
    //a>b?a:b = 100;//err不能被赋值
}

//对fun.c中的num进行声明(不要赋值)
extern const int num;

void test03()
{
    printf("num = %d\n",num);
    //num = 200;//err num只读

    //C语言中const 修饰变量名 说明变量名为只读（用户不能通过变量名data进行赋值）
    const int data = 100;//局部只读变量 内存在栈区（内存可读可写）
    //data = 200;//err

    printf("data = %d\n",data);
    //但是：如果知道data的地址 可以通过地址间接的修改data所对应空间的内容
    int *p = (int *)&data;
    *p = 2000;
    printf("data = %d\n",data);//ok 200
}
//int num1;

int main(int argc, char *argv[])
{
    //test03();
    extern int data5;
    printf("data5 = %d\n",data5);

    int data5 = 1000;
    return 0;
}
int num1;
