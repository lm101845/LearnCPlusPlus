//2023年5月4日22:03:55

#include <iostream>
using namespace std;

//有参构造才能隐式转换

class Data
{
private:
	int num;
public:
	//Data(int n) :num(n)
	//explicit：该有参构造函数不允许隐式转换
	explicit Data(int n):num(n)
	{
		cout << "有参构造" << endl;
	}

	~Data()
	{
		cout << "析构函数" << endl;
	}

	void showNum(void)
	{
		cout << "num="<<num << endl;
	}
};

int main(int argc, char* argv[])
{
	//隐式转换
	//Data data = 10;   //会转换成Data data(10)
	Data data(10);
	data.showNum();
	system("PAUSE");
}
