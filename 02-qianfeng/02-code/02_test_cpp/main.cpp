//2022��11��29��20:26:00
//2022��12��10��21:32:31
#include <iostream>

using namespace std;
int a = 10;   //ȫ�ֱ���
int apple = 8888;
void test01()
{
    int a = 20;   //�ֲ�����(����ͬ������������Ҫͬ��)
    cout << "�ֲ�����a=" << a << endl;    //����ѡ��ֲ�����

    //::������������� ���������û��ھֲ���Χ��ʹ��ȫ�ֱ���(C++����)
    cout << "ȫ�ֱ���a=" << ::a << endl;  //ȡȫ�ֱ���
    //C������ô�㶨����أ����õ�ȫ�ֱ����ĵ�ַ�Ϳ�����
}

//����һ������ΪA�������ռ�
//����ռ�������Դ�ű�����������
//������������һ���ǣ���������Ķ�����������������ǵ�
namespace A {
    int a = 100;
}

//������������Ҫ�������ռ�A�ټ�һ��������Ҳ�ǿ��Ե�
//��ʱ�����ռ�A����кϲ�
//�����ռ��ǿ��ŵģ���������ʱ���µĳ�Ա�������е������ռ���
namespace A {
    int b = 200;
    //�����ռ�����Ҳ���Էź���
    void func() {
        cout << "hello namespace!!" << b<<endl;
        //�����ռ�����ĺ�������ֱ�ӵ��������ռ�����ı�����
    }
}

namespace B {
    int a = 100;
}

void test02()
{
    cout << "ȫ���е�a=" << ::a << endl;
    cout << "A�е�a=" << A::a << endl;
    cout << "B�е�a=" << B::a << endl;
}
//�����ռ��Ƕ��
namespace C {
    int a = 1000;
    namespace D {
        int a = 2000;
    }
}

void test03()
{
    cout << "�����ռ��е�D�е�a:" << C::D::a << endl;
   
}

void test04()
{
    A::func();
}


namespace D {
    int d = 250;
    void foo();   //����ҲҪдһ�£�����һ�£�������ʵ����������ʵ�ֵ�
}

//void foo()    //��ͨ����
void D::foo()  //��Ա����  ���ⲿ�����ʱ�򣬼ǵü�������
{
    cout << "�����ռ��е�D�е�d:" << D::d << endl;
    cout << "�����ռ��е�D�е�d:" << d << endl;  //���Բ���дD::����Ϊ��ͬһ�������ռ������
    cout << "���������ռ��е���������:" << C::D::a << endl;   //����Ҳ�ǿ��Եģ�����
   
}
void test05()
{
    D::foo();
}

namespace veryLongName {
    int apple = 100;
    void func() { cout << "hello namespace" << endl; }
}

void test06()
{
    int apple = 250;
    //�����ռ�.���Ի������ռ�.�����������ȫ��ʹ�������ռ�ķ�ʽ
    //�������˺���������д��ô���ġ������ռ�.��������ֱ��д���Ի򷽷���
    //���Եģ�ʹ��һ��using����
    cout << "apple=" << veryLongName::apple << endl;
    veryLongName::func();
    //����ʹ��veryLongName�����ռ䣬���·����ֵı������ȴ���������ռ�ȥ��
    //�Ҳ����Ŵ������ط��ң�ʵ���Ҳ���Ҳ�ᱨ��
    using namespace veryLongName;
    cout << "apple=" << apple << endl;   //250 ���Ⱦֲ�����
    func();
}

void test07()
{
    //int apple = 300;    �����ᱨ��'apple' is already declared in this scope
    // ͨ��usingֱ��ʹ�������ռ��еĳ�Ա����;ֲ�������ͻ
    //�����������ȫ�ֱ�����ͻ(��������ȫ�ֱ����������� ::)
    
    //ָ��ʹ�������ռ��еľ����Ա 
    using  veryLongName::apple;
    cout << "�����ռ��е�apple=" << apple << endl;
    //����funcʹ�õ�ʱ�򣬱����������
    cout << "ȫ�ֱ����е�apple=" << ::apple << endl;
}

namespace C {
    //�������ء���C���Բ�֧��
    void func() { cout << "�޲ε�func" << endl; }
    void func(int a) { cout << "int��func" << endl; }
    void func(int a,int b) { cout << "int int��func" << endl;}
}

void test08()
{
    //usingָ��ʹ��C�е�func
    using C::func;
    func();
    func(10);
	func(10, 20);
}
int main(int argc, char *argv[])
{
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    //test06();
    //test07();
    test08();
    return 0;
}
