#include <iostream>

using namespace std;
class Room;//Room向前声明
class GoodGay
{
public:
    void visit1(Room &room);//此处的Room 被上方 class Room
    void visit2(Room &room);
};


class Room
{
    //如果想方 visit2作为Room类的友元 那么Visit2就可以访问 Room的私有数据
    //一定要记得 加类作用域
    friend void GoodGay::visit2(Room &room);
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

void GoodGay::visit1(Room &room)
{
    cout<<"好基友visit1访问了你的"<<room.sittingRoom<<endl;
    //cout<<"好基友visit1访问了你的"<<room.bedRoom<<endl;//不能访问 Room私有数据
}

void GoodGay::visit2(Room &room)
{
    cout<<"好基友visit2访问了你的"<<room.sittingRoom<<endl;
    cout<<"好基友visit2访问了你的"<<room.bedRoom<<endl;
}

int main(int argc, char *argv[])
{
    Room myRoom;
    GoodGay goodGay;

    goodGay.visit1(myRoom);
    goodGay.visit2(myRoom);

    return 0;
}
