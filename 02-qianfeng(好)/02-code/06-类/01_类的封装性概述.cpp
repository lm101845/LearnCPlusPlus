//2023��2��11��12:29:38

#include <iostream>
using namespace std;
//c���Ե�˼��:����(�ṹ��)�ͷ���(����)�Ƿֿ���

//��
typedef struct
{
	char name[32];
	int age;
} Person;

//��
typedef struct
{
	char name[32];
	int age;
	int type;
} Dog;

void PersonEat(Person* p)
{
	cout << p->name << "���ڳԷ�" << endl;
}

void DogEat(Dog* d)
{
	cout << d->name << "���ڳԹ���, ����" << endl;
}
void test01()
{
	Person person = { "����",43 };  //�������ڳԷ�
	Dog dog = { "����",6 };  //�������ڳԹ���, ����
	PersonEat(&person);
	DogEat(&dog);
	//����һ�����⣨���� ��������  ������� ���� ���ô������ݣ�
	DogEat((Dog*)&person);  //�������ڳԹ���, ����(����Ͳ�����)
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
