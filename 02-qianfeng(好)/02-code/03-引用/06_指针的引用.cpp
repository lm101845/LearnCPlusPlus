//2023年2月4日12:55:52

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//方式1：指针的方式，麻烦
void my_str1(char **p_str)  //等价于p_str = &str
{
	//p_str == &str  <==> *p_str == *&str <==> *p_str == str;
	*p_str = (char*)calloc(1, 32);  //*p_str表示的是一级指针
	strcpy(*p_str, "hello world");
	return;
}

//方式2：引用的方式，简单
void my_str2(char* (&my_str))  //char* (&my_str) <==> str;即my_str等价于str
{
	
	//注意：这里是定义，所以*和&这里不能抵消！！
	my_str = (char*)calloc(1, 32);
	strcpy(my_str, "hello world2");
	return;
}


void test01()
{
	char* str = NULL;
	//需求：封装一个函数，从堆区给str申请一个空间，并赋值为"hello world"
	//my_str1(&str);  //str本身就是一个指针，&str就是指针的指针了
	my_str2(str);
	cout << "str=" << str << endl;
	//指针用完后一定要记得释放
	free(str);
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
