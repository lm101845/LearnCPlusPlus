//2024年12月3日11:57:12

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数  判断2个立方体是否相等

class Cube {
public:
	void setL(int l) {
		m_L = l;
	}
	void setW(int w) {
		m_W = w;
	}
	void setH(int h) {
		m_H = h;
	}
private:
	int m_L;  //长
	int m_W;  //宽
	int m_H;  //高
};

int main()
{
	system("PAUSE");
}
