//2024��11��14��12:29:50

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//const��ʹ�ó���
struct Student {
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

void printStudent(struct Student s) {
	cout << "������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}

//�������е��βθĳ�ָ�룬���Լ����ڴ�ռ�(ָ��ֻռ4/8���ֽڣ��Ҳ�����ֵ����һ������һ����������)
void printStudent1(struct Student* s) {
	s->age = 150;
	//ֻ�����û����ж�ȡ��������ֹ�û�����д����������������Ͳ�����
	//���ǿ������β�ǰ���const
	cout << "����-ֵ���ݣ�" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

//�������е��βθĳ�ָ�룬���Լ����ڴ�ռ�(ָ��ֻռ4/8���ֽڣ��Ҳ�����ֵ����һ������һ����������)
void printStudent2(const struct  Student* s) {
	//s->age = 150;  //����ʧ�ܣ���Ϊ����const����
	// ����ָ�룬const����*,ȡ*����(ȡֵ)�Ͳ�������
	//ֻ�����û����ж�ȡ��������ֹ�û�����д����������������Ͳ�����
	//���ǿ������β�ǰ���const
	cout << "����-ֵ���ݣ�" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}
int main()
{
	//�����ṹ�����
	struct Student stu = { "����",15,70 };
	//ͨ��������ӡ�ṹ�������Ϣ
	printStudent(stu);
	printStudent1(&stu);
	system("PAUSE");
}
