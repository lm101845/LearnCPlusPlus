//2024年12月2日11:42:37

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//设计一个圆类，求圆的周长
//圆求周长的公式： 2 * PI * 半径
const double PI = 3.14;

//class代表设计一个类，类后面紧跟着的就是类名称
class Circle {
	//访问权限
public:
	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类创建一个具体的圆(对象)
	//实例化 (通过一个类，创建一个对象的过程)
	Circle c1;
	//给圆对象的属性进行复制
	c1.m_r = 10;
	cout << "圆的周长为： " << c1.calculateZC() << endl;
	system("PAUSE");
}
