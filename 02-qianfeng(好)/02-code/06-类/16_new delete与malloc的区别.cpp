//2023年5月4日22:11:37

#include <iostream>
using namespace std;

class Data
{
private:
	int num;
public:
	//Data(int n) :num(n)
	//explicit：该有参构造函数不允许隐式转换
	explicit Data(int n) :num(n)
	{
		cout << "有参构造" << endl;
	}

	~Data()
	{
		cout << "析构函数" << endl;
	}

	void showNum(void)
	{
		cout << "num=" << num << endl;
	}
};

int main(int argc, char* argv[])
{
	Data* p = (Data*)malloc(sizeof(Data));
	//malloc只分配内存空间，不对其进行初始化；
	if (p == NULL)
	{
		cout << "申请失败" << endl;
	}
	//p->Data(100);  //调用不了
	p->showNum();
	free(p);
	system("PAUSE");
}
