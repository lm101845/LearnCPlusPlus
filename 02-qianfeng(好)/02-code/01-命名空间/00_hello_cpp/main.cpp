//2022��11��25��18:00:00
#include <iostream>
//i:input(����)
//o:output(���)
//stream:��
//����stdio.h

//#include <string.h>  //�ɵķ����ʦ�����Ҷ�д���
#include <cstring>   //�µķ��C++��C���Ե�ͷ�ļ��ķ��
using namespace std;
//ʹ�ñ�׼��(std)�����ռ�

//C����������ֻ����һ���������������ж����������
int main(int argc, char *argv[])
{
    //cout�����  ����C���Ե�printf
    //endl: ����C���ԵĻ��з�
    //printf("hello ���!\n");
    cout << "Hello World!" << endl;
    cout << "������磡" << endl;
    //<<��ʾ���ͷ����ʾ���ַ���Hello World!���������̨

    //cin������������豸
    int num = 0;
    cin >> num;  //������������ݸ�ֵ��num(�Ҽ�ͷ)
    //��C�����У�Ҫ���ĳ��������������Ҫȡ��ַ��������C++���治��
    //C++���������ô��д���룬�������о�����ĺ���ԭ��
    //C++�������������������ȡ��ַ(�������õģ����Բ��õ�ַ)
    //C++������ѵ������������
    cout << "num =" << num << endl;

    char buf[128] = "";
    strcpy(buf, "hello string");
    cout << buf << endl;
    return 0;
}
