//2023��2��4��11:23:53

#include <iostream>
using namespace std;

//������Ϊ�����ķ���ֵ����
int& my_data(void)
{

	int num = 100;
	return num;
	//ע�⣺�����ķ���ֵΪ���õ�ʱ��ǧ��Ҫ���ؾֲ���������
	//��Ϊ����ִ����֮��ͽ����ˣ���ʱ�����ָ��ľ���һ�����ͷſռ�ĵ�ַ�ˣ�����
	//������ô����ֻҪ��֤�����ͷž�OK��
}

int& my_data2(void)
{
	static int num = 100;
	return num;
	//����д�ǿ��Եģ���
}
void test01()
{

	//����д���У���Ϊ���ñ���Ҫ�ڳ�ʼ����ʱ����ж���
	//int& ret;
	//ret = my_data();

	//ret�Ǳ�����ret��num�ı���
	//����������˭��ret����˭�ı���
	//int &ret = my_data();
	//���������Ǻ�Σ�յ�,��Ϊ��������ֵ֮��ͽ������ֲ�����num��û����,��ַ�ͷŵ���
	//����ret��ӡΪ��,���������һ�����ͷŵĿռ䣬���ǷǷ���
	//cout << "ret=" << ret << endl;

	int& ret2 = my_data2();  //ret2��num�ı���
	//����������ֵ��Ϊ��ֵ����ô�����ķ���ֵ���ͱ���������
	cout << "ret2=" << ret2 << endl;
}

int& my_data3(void)
{
	static int num = 24;
	cout << "num=" << num << endl;
	return num;
}
void test02()
{
	//�����ķ���ֵ��Ϊ��ֵ
	my_data3() = 2000;  //��������൱�ڸ�num��ֵΪ2000
	//��Ҫ��my_data3()���ɺ������ã�Ҫ�������ɱ��ʽ
	my_data3();
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
