//2024��11��14��12:06:07

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
//�ṹ��ָ��
//���ã�ͨ��ָ����ʽṹ���еĳ�Ա
//���ò�������->�� ����ͨ���ṹ��ָ����ʽṹ������

//����ѧ���ṹ��
struct Student {
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};


int main()
{
	//1.����ѧ���ṹ�����
	struct Student s = { "����",18,100 };

	//2.ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;

	//3.ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
	system("PAUSE");
}
