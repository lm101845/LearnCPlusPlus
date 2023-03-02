//2023��3��2��22:20:49

#include <iostream>
using namespace std;

//��Ƶ����
class Point 
{
private:
	int m_x;
	int m_y;
public:
	void setX(int x = 0)
	{
		m_x = x;
	}
	void setY(int y = 0)
	{
		m_y = y;
	}
	int getX(void)
	{
		return m_x;
	}
	int getY(void)
	{
		return m_y;
	}
};

//���Բ����
class Circle
{
private:
	Point m_p;  //Բ��
	int m_r;    //�뾶
public:
	void setR(int r)
	{
		m_r = r;
	}
	int get_R(void)
	{
		return m_r;
	}
	//����Բ��
	void setPoint(int x, int y)
	{
		m_p.setX(x);
		m_p.setY(y);
	}
	//�õ�Բ��(��������)
	Point getPoint(void)
	{
		return m_p;  
	}
	//�жϵ���Բ��λ�ù�ϵ
	void isPointOnCircle(Point &ob)
	{
		//�㵽Բ�ĵľ���
		int distance = (m_p.getX() - ob.getX()) * (m_p.getX() - ob.getX()) + \
			(m_p.getY() - ob.getY()) * (m_p.getY() - ob.getY());
		if (distance < m_r * m_r)
		{
			cout << "����Բ��" << endl;
		}
		else if (distance == m_r * m_r)
		{
			cout << "����Բ��" << endl;
		}
		else
		{
			cout << "����Բ��" << endl;
		}
	}
};

void test01()
{
	//ʵ����һ�������
	Point point;
	point.setX(10);
	point.setY(10);

	//ʵ����һ��Բ����
	Circle cir;
	cir.setPoint(5, 5);  //����Բ��
	cir.setR(5);   //���ð뾶 

	//�жϵ�point��Բ�Ĺ�ϵ
	cir.isPointOnCircle(point);
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
