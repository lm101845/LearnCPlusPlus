//2023��5��4��22:03:55

#include <iostream>
using namespace std;

//�вι��������ʽת��

class Data
{
private:
	int num;
public:
	//Data(int n) :num(n)
	//explicit�����вι��캯����������ʽת��
	explicit Data(int n):num(n)
	{
		cout << "�вι���" << endl;
	}

	~Data()
	{
		cout << "��������" << endl;
	}

	void showNum(void)
	{
		cout << "num="<<num << endl;
	}
};

int main(int argc, char* argv[])
{
	//��ʽת��
	//Data data = 10;   //��ת����Data data(10)
	Data data(10);
	data.showNum();
	system("PAUSE");
}
