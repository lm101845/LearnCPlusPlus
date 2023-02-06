//2023Äê2ÔÂ6ÈÕ21:08:00

#include <iostream>
using namespace std;
#define ADD(x,y) x + y
inline int Add(int x, int y) {
	return x + y;
}
void test01()
{
	int ret1 = ADD(10, 20) * 10;  //210 
	int ret2 = Add(10, 20) * 10;  //300
	cout << "ret1:" << ret1 << endl;
	cout << "ret2:" << ret2 << endl;
}

#define COMPARE(x,y)((x)<(y)?(x):(y))

int Compare(int x, int y) {
	return x < y ? x : y;
}

void test02()
{
	int a = 1;
	int b = 3;
	cout << "COMPARE(++a,b):" << COMPARE(++a, b) << endl;
	cout << "Compare(int x,int y):" << Compare(++a, b) << endl;
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
