//2024��11��14��12:12:24

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

struct Student {
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//������ʦ�ṹ��
struct Teacher {
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct Student stu; //�ӽṹ�� ѧ��
	//��дѧ���ṹ��Ļ��ᱨ��������ʹ�ò�����������
};

int main()
{
	//�ṹ��Ƕ�׽ṹ��
	//�����ṹ��
	struct Teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;
	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;

	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

	system("PAUSE");
}
