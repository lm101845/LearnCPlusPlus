//2024��11��15��12:09:29


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����

//1.���Ӣ�۽ṹ��
struct Hero {
	string name;
	int age;
	string sex;
};


void bubbleSort(struct Hero heroArray[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHeros(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << heroArray[i].name << " �Ա� " << heroArray[i].sex << " ���䣺 " << heroArray[i].age << endl;
	}
}

int main()
{

	//2.����������5��Ӣ��
	struct Hero heroArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//for (int i = 0; i < len; i++) {
	//	cout << "������ " << heroArray[i].name << " �Ա� " << heroArray[i].sex << " ���䣺 " << heroArray[i].age << endl;
	//}
	// 
	//3.������������򣬰������������������
	bubbleSort(heroArray,len);

	//4.�����������ӡ���
	printHeros(heroArray, len);
	system("PAUSE");
}
