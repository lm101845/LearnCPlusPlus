#include <iostream>

using namespace std;

class TV
{
    friend class Remote;
    //默认为私有
    enum{ On,Off }; //电视状态
    enum{ minVol,maxVol = 100 }; //音量从0到100
    enum{ minChannel = 1,maxChannel = 255 }; //频道从1到255
private:
    int mState; //电视状态，开机，还是关机
    int mVolume; //电视机音量
    int mChannel; //电视频道
public:
    TV()
    {
        this->mState = Off;//默认关机
        this->mVolume = minVol;
        this->mChannel = minChannel;
    }
    void onOrOff(void)
    {
        this->mState = (this->mState == On ? Off:On);
    }

    //加大音量
    void volumeUp(void)
    {
        if(this->mVolume >= maxVol)
            return;

        this->mVolume++;
    }
    //减小音量
    void volumeDown(void)
    {
        if(this->mVolume <= minVol)
            return;
        this->mVolume--;
    }

    //增加频道
    void channelUp(void)
    {
        if(this->mChannel >= maxChannel)
            return;
        this->mChannel++;
    }
    //减小频道
    void channelDown(void)
    {
        if(this->mChannel <= minChannel)
            return;
        this->mChannel--;
    }

    //显示电视机的状态
    void showTVState(void)
    {
        cout<<"电视机的状态为:"<< (this->mState==On ? "开机":"关机") <<endl;
        cout<<"电视机的音量:"<<this->mVolume<<endl;
        cout<<"电视机的频道:"<<this->mChannel<<endl;
    }
};

//遥控器类
class Remote
{
private:
    TV *pTv;
public:
    Remote(TV *pTv)
    {
        this->pTv = pTv;
    }
    //音量的加减
    void volumeUp(void)
    {
        //调节的电视机的音量
        this->pTv->volumeUp();
    }
    void volumeDown(void)
    {
        this->pTv->volumeDown();
    }

    //频道的加减
    void channelUp(void)
    {
        this->pTv->channelUp();
    }
    void channelDown(void)
    {
        this->pTv->channelDown();
    }

    //电视开关
    void onOrOff(void)
    {
        this->pTv->onOrOff();
    }

    //遥控器设置频道设置
    void setChannel(int num)
    {
        //判断 频道 是否有效
        if(num >= TV::minChannel && num<= TV::maxChannel )
        {
            this->pTv->mChannel = num;
        }
    }

    void showTVState(void)
    {
        this->pTv->showTVState();
    }

};

void test02()
{
    TV tv;
    Remote remote(&tv);

    remote.onOrOff();
    remote.volumeUp();
    remote.volumeUp();
    remote.volumeUp();
    remote.volumeUp();

    remote.channelUp();
    remote.channelUp();

    remote.showTVState();

    remote.setChannel(75);
    remote.showTVState();
}
void test01()
{
    TV tv;
    tv.onOrOff();//开机

    tv.volumeUp();//调四次音量
    tv.volumeUp();
    tv.volumeUp();
    tv.volumeUp();

    tv.channelUp();//调三次频道
    tv.channelUp();

    tv.showTVState();
}

int main(int argc, char *argv[])
{
    test02();
    return 0;
}
