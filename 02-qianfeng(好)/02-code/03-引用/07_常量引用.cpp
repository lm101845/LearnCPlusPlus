//2023��2��4��13:36:24

#include <iostream>
using namespace std;

typedef struct
{
	int num;
	char name[32];
}STU;

//д��1������
void myPrintSTU1(STU tmp)  //��ͨ�ṹ�������Ϊ�βΣ�����̫��(36���ֽ�)
{
	cout << sizeof(tmp) << endl;  //36
	cout << "ѧ��" << tmp.num << ",����:" << tmp.name << endl;
}

//д��2����
void myPrintSTU2(const STU &tmp)   //STU &tmp = lucy; tmp��lucy�ı���,û�п��ٶ����ռ�
//��������ע�⣺���������ܸ������ã����ǿ��Ը���const���ã�const���ε����ã������޸�(ֻ�ܶ�����д)
{
	cout << sizeof(tmp) << endl;  //36 �ϸ���˵���ǲ��lucy�Ĵ�С
	//���������õĺô�����Լ�˿ռ�
	//tmp.num = 2000;   //�����Ĳ���������Σ�յ�
	//���������õĻ����������ڲ��Գ�Ա���������޸��ⲿ���ԣ��з���(���ڲ���ǰ��const����������)
	cout << "ѧ��" << tmp.num << ",����:" << tmp.name << endl;
}
void test01()
{
	STU lucy = { 100,"lucy" };
	//���󣺶���һ������������(������)lucy��Ա(��������������д)
	//myPrintSTU1(lucy);
	myPrintSTU2(lucy);
}

void test02()
{
	//������10ȡ����������num
	//int& num = 10;
	//�����ǳ������õ���ֵ����Ϊ��ʼֵ
	//int &��Ե���int���ͣ��ϸ���˵10��const int����

	const int &num = 10;  //����д����
	cout << "num=" << num<<endl;
}
int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
