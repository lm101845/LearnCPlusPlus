#include <iostream>

using namespace std;

/*
3.1.2.1 string 构造函数
string();//创建一个空的字符串 例如: string str;
string(const string& str);//使用一个string对象初始化另一个string对象
string(const char* s);//使用字符串s初始化
string(int n, char c);//使用n个字符c初始化 v

3.1.2.2 string基本赋值操作
string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
string& operator=(const string &s);//把字符串s赋给当前的字符串
string& operator=(char c);//字符赋值给当前的字符串
string& assign(const char *s);//把字符串s赋给当前的字符串
string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);//把字符串s赋给当前字符串
string& assign(int n, char c);//用n个字符c赋给当前字符串
string& assign(const string &s, int start, int n);//将s从start开始n个
*/
void test01()
{
    //string(const char* s);//使用字符串s初始化
    string str1("hello string");
    cout<<str1<<endl;//"hello string"

    //string(int n, char c);//使用n个字符c初始化
    string str2(10,'H');
    cout<<str2<<endl;//"HHHHHHHHHH"

    string str3 = str2;
    cout<<str3<<endl;//"HHHHHHHHHH"

    string str4;
    //string& operator=(const string &s);//把字符串s赋给当前的字符串
    str4 = str1;
    cout<<str4<<endl;//"hello string"

    //string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
    string str5;
    str5 = "hello str5";
    cout<<str5<<endl;//"hello str5"

    //string& operator=(char c);//字符赋值给当前的字符串
    string str6;
    str6 ='H';
    cout<<str6<<endl;//"H"

    //string& assign(const char *s);//把字符串s赋给当前的字符串
    string str7;
    str7.assign("hello str7");
    cout<<str7<<endl;//"hello str7"

    //string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
    string str8;
    str8.assign("hello str8", 5);
    cout<<str8<<endl;//"hello"

    //string& assign(const string &s);//把字符串s赋给当前字符串
    string str9;
    str9.assign(str8);
    cout<<str9<<endl;//"hello"

    //string& assign(int n, char c);//用n个字符c赋给当前字符串
    string str10;
    str10.assign(10,'W');
    cout<<str10<<endl;//"WWWWWWWWWW"

    //string& assign(const string &s, int start, int n);//将s从start开始n个
    string str11;
    str11.assign("hehehahahaxixi", 4, 6);
    cout<<str11<<endl;//"hahaha"
}
/*
3.1.2.3 string存取字符操作
char& operator[](int n);//通过[]方式取字符
char& at(int n);//通过at方法获取字符
*/

void test02()
{
    string str1="hello string";
    cout<<str1[1]<<endl;//'e'
    cout<<str1.at(1)<<endl;//'e'

    str1[1]='E';
    cout<<str1<<endl;//"hEllo string"
    str1.at(7) = 'T';
    cout<<str1<<endl;//"hEllo sTring"

    //[]和at的区别
    try
    {
        //str1[1000]='G';//越界 []不抛出异常
        str1.at(1000)='G';//越界 at会抛出异常
    }
    catch(exception &e)
    {
        cout<<"异常:"<<e.what()<<endl;
    }
}

/*
3.1.2.4 string拼接操作
string& operator+=(const string& str);//重载+=操作符
string& operator+=(const char* str);//重载+=操作符
string& operator+=(const char c);//重载+=操作符
string& append(const char *s);//把字符串s连接到当前字符串结尾
string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);//同operator+=()
string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
string& append(int n, char c);//在当前字符串结尾添加n个字符c
*/
void test03()
{
    string str1="hello";
    string str2=" string";
    //string& operator+=(const string& str);//重载+=操作符
    str1 += str2;
    cout<<str1<<endl;//"hello string"

    string str3="hello";
    //string& operator+=(const char* str);//重载+=操作符
    str3 += " string";
    cout<<str3<<endl;//"hello string"

    string str4="hello";
    //string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
    str4.append("hehehaha",4);
    cout<<str4<<endl;//"hellohehe"

    //string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
    string str5="hello";
    string str6="hehehahaha";
    str5.append(str6,4,6);
    cout<<str6<<endl;//"hellohahaha"
}

/*
3.1.2.5 string查找和替换
int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
*/

#include<string.h>
void test04()
{
    //int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
    string str1="hehe:haha:xixi:haha:heihei";
    //从str1中找haha
    string tmp="haha";
    cout<<str1.find(tmp)<<endl;//5
    cout<<str1.find(tmp,10)<<endl;//15

    //int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
    cout<<str1.find("haha")<<endl;//5

    str1.replace(5,4,"###");
    cout<<str1<<endl;//"hehe:###:xixi:haha:heihei"

    string str2="www.sex.117114.sex.person.77.com";
    //需求：将字符串中的所有"sex"用***屏蔽
    int ret = 0;
    while((ret = str2.find("sex")) < str2.size())
    {
        str2.replace(ret,strlen("sex"),"***");
    }
    cout<<str2<<endl;
}
/*
3.1.2.6 string比较操作
compare函数在>时返回 1，<时返回 -1，==时返回 0。
比较区分大小写，比较时参考字典顺序，排越前面的越小。
大写的A比小写的a小。

int compare(const string &s) const;//与字符串s比较
int compare(const char *s) const;//与字符串s比较
*/

void test05()
{
    string str1="hehe";
    string str2 = "haha";
    cout<<str1.compare(str2)<<endl;//1
    cout<<str1.compare("lala")<<endl;//-1
    cout<<str1.compare("hehe")<<endl;//0
}

/*
3.1.2.7 string子串
string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
*/
void test06()
{
    string str1="hehehe:ha:xixixi:lalala:heihei";
    //cout<<str1.substr(5,4)<<endl;

    //案例:将:分割的所有字符串提取出来
    int pos = 0;

    while(1)
    {
        int ret = str1.find(":",pos);
        if(ret < 0)
        {
            string tmp = str1.substr(pos, str1.size()-pos);
            cout<<tmp<<endl;
            break;
        }

        string tmp = str1.substr(pos, ret-pos);
        cout<<tmp<<endl;

        pos = ret+1;
    }
}
/*
3.1.2.8 string插入和删除操作
string& insert(int pos, const char* s); //插入字符串
string& insert(int pos, const string& str); //插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
string& erase(int pos, int n = npos);//删除从Pos开始的n个字符
*/

void test07()
{
    string str1="hello world";
    str1.insert(5,"hehe");
    cout<<str1<<endl;//"hellohehe world

    str1.erase(5,4);//删除字符串中hehe
    cout<<str1<<endl;//"hello world"

    //清空字符串 str1.size()得到字符串的总大小
    str1.erase(0,str1.size());
    cout<<str1.size()<<endl;//0
}

void test08()
{
    string str1;//对象
    char *str2 ="hello str";

    //将char * 转成 string （直接完成）
    str1 = str2;
    cout<<str1<<endl;//hello str

    string str3="hello str3";
    //不能直接将string 转换成 char * 必须借助string中的c_str方法完成
    //char *str4 = str3;//err
    char *str4 = const_cast<char *> (str3.c_str());
    cout<<str4<<endl;//"hello str3"
}
int main(int argc, char *argv[])
{
    test08();
    return 0;
}
