//2024��12��2��12:02:00

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//����Ȩ��
//����
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է��� ����Ҳ���Է��ʸ����еı�������
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է��� ���಻���Է��ʸ����е�˽������

class Person
{
	//����  ����Ȩ��
public:
	string m_Name;

	//����  ����Ȩ��
protected:
	string m_Car;

	//���п�����  ˽��Ȩ��
private:
	int m_Password;

	//������������ڣ�û�����⣬�����Է��ʵ�
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main()
{
	//����
	Person p;
	p.m_Name = "����";
	//p.m_Car = "����";  //����Ȩ��������ʲ���
	//p.m_Password = 123; //˽��Ȩ��������ʲ���
	system("PAUSE");
}
