//2024��12��2��11:51:38
//���һ��ѧ���࣬������������ѧ�ţ�
// ���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

class Student {
public:   //����Ȩ��

	//���е����Ժ���Ϊ������ͳһ��Ϊ ��Ա
	//���ԣ���Ա���ԡ���Ա����
	//��Ϊ����Ա��������Ա����
	string m_Name;  //����
	int m_Id;  //ѧ��

	//��Ϊ
	//��ʾ������ѧ��
	void showStudent() {
		cout << "name:" << m_Name << " ID:" << m_Id << endl;
	}

	//ͨ������Ϊ���������Ը�ֵ
	void setName(string name) {
		m_Name = name;
	}

	void setId(int id) {
		m_Id = id;
	}
};

int main()
{
	//ʵ������������һ�������ѩ��
	Student s1;
	s1.m_Name = "����";
	s1.m_Id = 10;
	s1.showStudent();

	Student s2;
	s2.m_Name = "����";
	s2.m_Id = 20;
	s2.showStudent();

	Student s3;
	s3.setName("����");
	s3.setId(30);
	s2.showStudent();
	system("PAUSE");
}
