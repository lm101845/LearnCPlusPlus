#include <iostream>

using namespace std;
//设计点的类
class Point
{
private:
    int m_x;
    int m_y;
public:
    void setX(int x=0)
    {
        m_x = x;
    }
    void setY(int y=0)
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

//设计圆的类
class circle
{
private:
    Point m_p;//圆心
    int m_r;//半径
public:
    void setR(int r)
    {
        m_r = r;
    }
    int getR(void)
    {
        return m_r;
    }

    void setPoint(int x,int y)
    {
        m_p.setX(x);
        m_p.setY(y);
    }
    Point getPoint(void)
    {
        return m_p;//得到圆心
    }

    //判断 点 在 圆的位置
    void isPointOnCircle(Point &ob)
    {
        //点到圆心的距离
        int distance = (m_p.getX()- ob.getX())*(m_p.getX()- ob.getX())+\
                (m_p.getY()-ob.getY())*(m_p.getY()-ob.getY());
        if(distance < m_r*m_r)
        {
            cout<<"点在圆内"<<endl;
        }
        else if(distance == m_r*m_r)
        {
            cout<<"点在圆上"<<endl;
        }
        else
        {
            cout<<"点在圆外"<<endl;
        }

    }
};
int main(int argc, char *argv[])
{
    //实例化一个点对象
    Point point;
    point.setX(20);
    point.setY(20);

    //实例化一个圆的对象
    circle cir;
    cir.setPoint(5,5);//设置圆心
    cir.setR(5);//设置半径

    //判断点point 与 圆的关系
    cir.isPointOnCircle(point);
    return 0;
}
