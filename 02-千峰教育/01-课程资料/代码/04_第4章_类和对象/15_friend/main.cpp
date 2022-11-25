#include <iostream>
#include <string>
using namespace std;
//房间类
class Room
{
    //将goodGayVisit作为类的友元函数
    //goodGayVisit 访问 类中所有数据 但是 它不是类的成员
    friend void goodGayVisit(Room &room);
private:
    string bedRoom;//卧室
public:
    string sittingRoom;//客厅
public:
    Room()
    {
        this->bedRoom = "卧室";
        this->sittingRoom="客厅";
    }
};

// 普通全局函数 作为 类的友元
//好基友 访问 我的房间
void goodGayVisit(Room &room)
{
    cout<<"好基友访问了你的"<<room.sittingRoom<<endl;
    cout<<"好基友访问了你的"<<room.bedRoom<<endl;//ok
}
void test01()
{
    Room myRoom;
    goodGayVisit(myRoom);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
