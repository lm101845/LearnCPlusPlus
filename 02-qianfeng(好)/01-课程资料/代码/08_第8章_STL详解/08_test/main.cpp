#include <iostream>

using namespace std;
/*
3.6.4.1 list构造函数
list<T> lstT;//list采用采用模板类实现,对象的默认构造形式：
list(beg,end);//构造函数将[beg, end)区间中的元素拷贝给本身。
list(n,elem);//构造函数将n个elem拷贝给本身。
list(const list &lst);//拷贝构造函数。
3.6.4.2 list数据元素插入和删除操作
push_back(elem);//在容器尾部加入一个元素
pop_back();//删除容器中最后一个元素
push_front(elem);//在容器开头插入一个元素
pop_front();//从容器开头移除第一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
remove(elem);//删除容器中所有与elem值匹配的元素。
3.6.4.3 list大小操作
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(num);//重新指定容器的长度为num，
若容器变长，则以默认值填充新位置。
如果容器变短，则末尾超出容器长度的元素被删除。
resize(num, elem);//重新指定容器的长度为num，
若容器变长，则以elem值填充新位置。
如果容器变短，则末尾超出容器长度的元素被删除。
3.6.4.4 list赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
list& operator=(const list &lst);//重载等号操作符
swap(lst);//将lst与本身的元素互换。
3.6.4.5 list数据的存取
front();//返回第一个元素。
back();//返回最后一个元素。
3.6.4.6 list反转排序
reverse();//反转链表，比如lst包含1,3,5元素，运行此方法后，lst就包含5,3,1元素。
sort(); //list排序
*/
#include<list>
#include<algorithm>
void printListInt(list<int> &L)
{
    for(list<int>::iterator it=L.begin();it!=L.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    list<int> L;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    L.push_back(40);

    printListInt(L);//10 20 30 40
    //迭代器+n 只有随机访问迭代器支持
    //而list容器的迭代器是双向迭代器 不支持+n
    //L.insert(L.begin()+2, 3, 100);//err
    list<int>::iterator it = L.begin();
    //++ 随机访问迭代器 以及 双向迭代器 都支持
    it++;
    it++;
    L.insert(it,3,100);
    printListInt(L);//10 20 100 100 100 30 40

    //remove(elem);//删除容器中所有与elem值匹配的元素。
    L.remove(100);//删除所有100
    printListInt(L);//10 20 30 40

    //链表反转
    L.reverse();
    printListInt(L);//40 30 20 10

    //sort是系统提供的算法 仅支持 随机访问迭代器（不支持list）
    //list容器不能使用系统算法 list会自己提供算法
    //sort(L.begin(),L.end());
    L.sort();
    printListInt(L);//10 20 30 40
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
