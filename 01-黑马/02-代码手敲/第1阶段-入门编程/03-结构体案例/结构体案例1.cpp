//2024��11��15��11:50:49

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�

//ѧ���Ľṹ�嶨��
struct Student {
	string sName;
	int score;
};

//��ʦ�Ľṹ�嶨��
struct Teacher {
	string tName;
	struct Student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[],int len) {
	string tName = "��ʦ";
	string sName = "ѧ��";
	string nameSeed = "ABCDE";
	int sNum = 5;
	//������ʦ��ֵ
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < sNum; j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeachers(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t������" << tArray[i].sArray[j].sName << " ������" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>

	//1.����3����ʦ������
	struct Teacher tArray[3];
	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3.��ӡ������ʦ��������ѧ����Ϣ
	printTeachers(tArray, len);
	system("PAUSE");
}

