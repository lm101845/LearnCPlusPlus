#include <iostream>

using namespace std;
class Cub
{
private://确定数据
    int m_l;
    int m_w;
    int m_h;
public:
    //m_l m_w m_h有写操作
    void setL(int l)
    {
        m_l = l;
    }
    void setW(int w)
    {
        m_w = w;
    }
    void setH(int h)
    {
        m_h=h;
    }

    //m_l m_w m_h有读操作
    int getL(void)
    {
        return m_l;
    }
    int getW(void)
    {
        return m_w;
    }
    int getH(void)
    {
        return m_h;
    }

    //计算面积
    int getS(void)
    {
        return 2*(m_l*m_w+m_l*m_h+m_w*m_h);
    }

    //计算体积
    int getV(void)
    {
        return m_l*m_w*m_h;
    }

    //成员函数判断
    bool myCompareCub2(Cub &ob)//类的内部 没有权限之分
    {
        if(m_l == ob.m_l && m_w == ob.m_w && m_h == ob.m_h)
            return true;

        return false;
    }

};

//全局函数
bool myCompareCub1(Cub &c1, Cub &c2)
{
    //类的外部 必须使用getL获取长度
    if((c1.getL() == c2.getL()) && (c1.getW() == c2.getW()) && (c1.getH() == c2.getH()))
    {
        return true;
    }

    return false;

}
int main(int argc, char *argv[])
{

    Cub cub1;//实例化一个对象
    cub1.setL(10);
    cub1.setW(10);
    cub1.setH(10);

    //计算面积
    cout<<"cub1的面积:"<<cub1.getS()<<endl;
    //计算体积
    cout<<"cub1的体积:"<<cub1.getV()<<endl;

    Cub cub2;//实例化一个对象
    cub2.setL(10);
    cub2.setW(20);
    cub2.setH(10);

    //全局函数
    if(myCompareCub1(cub1,cub2) == true)
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }

    Cub cub3;
    cub3.setL(10);
    cub3.setW(10);
    cub3.setH(10);
    //成员函数
    if( cub3.myCompareCub2(cub1) == true)
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }

    return 0;
}
