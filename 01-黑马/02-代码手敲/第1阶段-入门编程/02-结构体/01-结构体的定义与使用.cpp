//2024��11��14��11:45:02

//> �ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
//> �ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
//> �ܽ�3���ṹ��������ò����� ''.''  ���ʳ�Ա

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//1.����ѧ���������ͣ�ѧ������(���������䡢����)
//�Զ����������ͣ�һЩ���͵ļ�����ɵ�һ������
//�﷨��struct �ṹ���� { �ṹ���Ա�б� }��
struct Student {
	string name;
	int age;
	int score;
};

struct Student2
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
}stu3; //�ṹ�����������ʽ3 

//2.ͨ��ѧ�����ʹ�������ѧ��(���ַ�ʽ)
int main()
{	
	// 2.1
	struct Student stu1; //struct �ؼ��ֿ���ʡ��
	//��s1���Ը�ֵ,ͨ����.�����ʽṹ������е�����
	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;
	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

	//2.2
	struct Student stu2 = { "����",19,60 };
	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;

	//2.3��������ṹ���ͬʱ��˳�㡿����һ���ṹ�����
	//��3�ַ�ʽ�������ã���Ϊ���Ǻܿ��ܺ����㴴���ĺ���ı���stu3
	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;
	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;
	system("PAUSE");
}
