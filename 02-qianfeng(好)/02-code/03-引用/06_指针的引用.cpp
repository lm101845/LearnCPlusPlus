//2023��2��4��12:55:52

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//��ʽ1��ָ��ķ�ʽ���鷳
void my_str1(char **p_str)  //�ȼ���p_str = &str
{
	//p_str == &str  <==> *p_str == *&str <==> *p_str == str;
	*p_str = (char*)calloc(1, 32);  //*p_str��ʾ����һ��ָ��
	strcpy(*p_str, "hello world");
	return;
}

//��ʽ2�����õķ�ʽ����
void my_str2(char* (&my_str))  //char* (&my_str) <==> str;��my_str�ȼ���str
{
	
	//ע�⣺�����Ƕ��壬����*��&���ﲻ�ܵ�������
	my_str = (char*)calloc(1, 32);
	strcpy(my_str, "hello world2");
	return;
}


void test01()
{
	char* str = NULL;
	//���󣺷�װһ���������Ӷ�����str����һ���ռ䣬����ֵΪ"hello world"
	//my_str1(&str);  //str�������һ��ָ�룬&str����ָ���ָ����
	my_str2(str);
	cout << "str=" << str << endl;
	//ָ�������һ��Ҫ�ǵ��ͷ�
	free(str);
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
