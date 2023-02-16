//2023��2��16��19:04:27

#include <iostream>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//ע�⣺�������ʱ�򣬲�Ҫ����Ա��ʼ��
//��Ϊ����һ������ĸ�����д�С�����ǲ�����ռ�
//û�пռ䣬������θ�����ֵ�أ�
class Person
{
private:
	char m_name[32];
	int m_age;
public:
	//��ʼ������
	void initPerson(const char* name, int age)
	{
		strcpy_s(m_name, name);
		m_age = age;
	}
	//�ṩget,set����
	//�Գ�Ա����m_name����д����
	void setName(char* name)
	{
		strcpy_s(m_name, name);
	}
	//�Գ�Ա����m_name���ж�����
	char* getName(void)
	{
		return m_name;
	}

	//�Գ�Ա����age����д����
	void setAge(int age)
	{
		if (age > 0 && age < 100)
			m_age = age;
		else
			cout << "age��ֵ��Ч" << endl;
	}
	//�Գ�Ա����age���ж�����
	int getAge(void)
	{
		return m_age;
	}

	void showPerson(void)
	{
		cout << "������" << m_name << ", ����: " << m_age << endl;
	}
};

int main(int argc, char* argv[])
{
	//test01();
	//ͨ���� ʵ���� һ��������Person����һ��������
	Person lucy;  //Person�������� �����  lucy��һ������ ʵ����ʵ�ʴ��ڣ�
	//���� ֻ�ܽ��� ���з��� ����˽������
	//��ʼ��
	lucy.initPerson("lucy",18);
	//��ȡ����
	cout << "����:" << lucy.getName() << endl;
	//��ȡ����
	cout << "����:" << lucy.getAge() << endl;
	
	//���� ����
	lucy.setAge(200);
	lucy.setAge(28);

	//����lucy����Ϣ
	lucy.showPerson();

	system("PAUSE");
}