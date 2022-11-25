#include <iostream>
#include<string>
#include<vector>
#include<deque>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;

//选手类
class Person
{
public:
    string name;
    int score;
    Person(string name,int score)
    {
        this->name = name;
        this->score =score;
    }
};
void createPerson(vector<Person> &v)
{
    //5名选手是ABCDE
    string nameTmp="ABCDE";
    for(int i=0;i<5;i++)
    {
        string name="选手:";
        name += nameTmp[i];

        //将选手的姓名 分数0 放入vector容器中
        v.push_back(Person(name,0));
    }
}
void printVectorPerson(vector<Person> &v)
{
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it == Person
        cout<<(*it).name<<" "<<(*it).score<<endl;
    }
}
void playGame(vector<Person> &v)
{
    //设置随机种子
    srand(time(NULL));

    //容器v中的每个人 逐一比赛
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it == Person
        //每位选手 都要被10个评委打分 放入deque容器中
        deque<int> d;
        for(int i=0;i<10;i++)//10个评委
        {
            int score = rand()%41+60;//60~100
            d.push_back(score);
        }

        //对deque容器（评委的10个分数）排序
        sort(d.begin(), d.end());//去掉一个最低分 最高分

        //去掉一个最低分
        d.pop_front();
        //去掉一个最高分
        d.pop_back();

        //得到每个选手的总分数
        int sum = accumulate(d.begin(),d.end(), 0);

        //获取平均分 赋值 选手的score
        (*it).score = sum/d.size();
    }
}
int main(int argc, char *argv[])
{
    //1、定义一个vector容器存放5名选手
    vector<Person> v;
    createPerson(v);

    //2、5名选手 逐一比赛
    playGame(v);

    //3、将5名选手的成绩打印出来
    printVectorPerson(v);
    return 0;
}
