//2024��11��14��11:57:08

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//�ṹ������
//�﷨��struct  �ṹ���� ������[Ԫ�ظ���] = {  {} , {} , ... {} }

//1.����ṹ��
struct Student {
	string name;
	int age;
	int score;
};



int main()
{
	//2.�����ṹ������
	struct Student stuArray[3] = {
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};

	//3.���ṹ�������е�Ԫ�ظ�ֵ
	//�ṹ���е�ֵ�������ǿ��Ըĵ�
	//��������Գ�ʼ����ʱ�����һ��ֵ��Ҳ���Ժ����ٸ�����ֵ�����ǿ��Ե�
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name << " ���䣺" << stuArray[i].age << " ������" << stuArray[i].score << endl;
	}
	system("PAUSE");
}
