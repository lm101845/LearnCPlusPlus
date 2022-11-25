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
    //将GoodGay作为Room的友元
    //GoodGay 所有成员函数 都可以访问 Room私有数据
    friend class GoodGay;
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
    cout<<"好基友visit1访问了你的"<<room.bedRoom<<endl;
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
