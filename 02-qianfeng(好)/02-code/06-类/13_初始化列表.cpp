//2023��4��30��17:38:14 

#include <iostream>
using namespace std;

class Data
{
private:
	int m_a;
	int m_b;
	int m_c;
public:
	//д��1��
	//Data(int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//	cout << "�вι���" << endl;
	//}

	//д��2��
	//��Ա��(�β���)
	//ע�⣺��ʼ���б�(�����б�)ֻ���ڹ��캯����ʹ��
	Data(int a, int b, int c):m_a(a),m_b(b),m_c(c)
	{
		cout << "�вι���1" << endl;
	}
	~Data()
	{
		cout << "��������" << endl;
	}
	void showData(void)
	{
		cout << m_a<<" "<<m_b<<" " <<m_c<< " " << endl;
	}

};


void test01()
{
	Data ob(10, 20, 30);
	ob.showData();
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
