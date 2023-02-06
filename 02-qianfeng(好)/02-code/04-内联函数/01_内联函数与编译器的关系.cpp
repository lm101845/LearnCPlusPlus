//2023Äê2ÔÂ6ÈÕ21:32:49

#include <iostream>
using namespace std;

inline int my_mul(int x, int y)
{
	return x * y;
}

void test01()
{
	cout << "my_add=" << my_mul(10+10,20+20) << endl;
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
