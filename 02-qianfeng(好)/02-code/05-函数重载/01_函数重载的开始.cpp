//2023��2��11��09:46:29
//��������������C++�Ķ�̬

#include <iostream>
using namespace std;

//ͬһ��������  ����������ͬ  ��������(�������β�����������)��ͬ  ����˳��ͬ
void myFunc()
{
    cout << "�޲ε�myFunc" << endl;
}
void myFunc(int a)
{
    cout << "int��myFunc" << endl;
}
void myFunc(int a, int b)
{
    cout << "int,int ��myFunc" << endl;
}
void myFunc(int a, double b)
{
    cout << "int , double��myFunc" << endl;
}
void myFunc(double a, int b)
{
    cout << "double,int��myFunc" << endl;
}
/*
int myFunc(double a,int b)//��������,�����˶�����(���ܰѷ���ֵ��Ϊ���ص�����)
{
    cout<<"double,int��myFunc ����ֵ����int"<<endl;
}*/
void test01()
{
    myFunc(10);//int
    myFunc(10, 20);//int int
    myFunc(10, 20.2);//int double
    myFunc(10.1, 20);//double int
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
