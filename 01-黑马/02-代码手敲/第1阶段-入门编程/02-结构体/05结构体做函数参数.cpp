//2024��11��14��12:18:17

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//ѧ���ṹ�嶨��
struct Student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//����ѧ����Ϣ����
//1.ֵ����(�õ㡾.��)
void printStudent1(struct Student s) {
	s.age = 100;
	//ֵ�����޸��βΣ�����Ӱ��ʵ��(�����stu,����18��)
	cout << "�Ӻ����� ������" << s.name << " ���䣺 " << s.age << " ������" << s.score << endl;
}

//2.��ַ����(�ü�ͷ��->��)
void printStudent2(struct Student * s) {
	s->score = 60; 
	//��ַ���ݣ��β����Ӱ��ʵ��
	cout << "�Ӻ���2�� ������" << s->name << " ���䣺 " << s->age << " ������" << s->score << endl;
}

int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
	//�����ṹ�����
	struct Student stu;
	stu.name = "����";
	stu.age  =18;
	stu.score = 100;
	cout << "main������ ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	printStudent1(stu);
	cout << "main����2�� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	printStudent2(&stu);
	cout << "main����3�� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;


	system("PAUSE");
}
