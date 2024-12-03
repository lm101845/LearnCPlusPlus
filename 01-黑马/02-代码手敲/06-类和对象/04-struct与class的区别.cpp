//2024年12月3日11:40:17

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//-struct 默认权限为公共
//-class   默认权限为私有

class C1 {
//private:
	int m_A;   //默认是私有权限
};

struct C2
{
	int m_A;  //默认是公共权限
};
int main()
{
	C1 c1;
	//c1.m_A = 10; //错误，访问权限是私有

	C2 c2;
	c2.m_A = 10; //正确，访问权限是公共
	system("PAUSE");
}
