#include <iostream>

using namespace std;
//父类
class Html
{
public:
    void header(void)
    {
        cout<<"网页头部"<<endl;
    }
    void leftHtml(void)
    {
        cout<<"左侧栏"<<endl;
    }
    //网页主体部分
    void MainBody(){
        cout << "首页网页主题内容!" << endl;
    }
    //网页底部
    void Footer(){
        cout << "网页底部!" << endl;
    }
private:
    string mTitle; //网页标题
};

class IOTHtml:public Html
{
public:
    //网页主体部分
    void MainBody(){
        cout << "物联网的主页!" << endl;
    }
};
class H5:public Html
{
public:
    //网页主体部分
    void MainBody(){
        cout << "H5的主页!" << endl;
    }
};
int main(int argc, char *argv[])
{
    IOTHtml ob;
    ob.header();
    ob.leftHtml();
    ob.MainBody();
    ob.Footer();

    H5 ob1;
    ob1.header();
    ob1.leftHtml();
    ob1.MainBody();
    ob1.Footer();
    return 0;
}
