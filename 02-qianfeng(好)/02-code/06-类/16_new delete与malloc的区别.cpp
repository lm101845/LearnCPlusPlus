//2023��5��4��22:11:37

#include <iostream>
using namespace std;

class Data
{
private:
	int num;
public:
	//Data(int n) :num(n)
	//explicit�����вι��캯����������ʽת��
	explicit Data(int n) :num(n)
	{
		cout << "�вι���" << endl;
	}

	~Data()
	{
		cout << "��������" << endl;
	}

	void showNum(void)
	{
		cout << "num=" << num << endl;
	}
};

int main(int argc, char* argv[])
{
	Data* p = (Data*)malloc(sizeof(Data));
	//mallocֻ�����ڴ�ռ䣬��������г�ʼ����
	if (p == NULL)
	{
		cout << "����ʧ��" << endl;
	}
	//p->Data(100);  //���ò���
	p->showNum();
	free(p);
	system("PAUSE");
}
