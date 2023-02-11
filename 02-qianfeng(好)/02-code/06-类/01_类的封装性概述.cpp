//2023年2月11日12:29:38

#include <iostream>
using namespace std;
//c语言的思想:数据(结构体)和方法(函数)是分开的

//人
typedef struct
{
	char name[32];
	int age;
} Person;

//狗
typedef struct
{
	char name[32];
	int age;
	int type;
} Dog;

void PersonEat(Person* p)
{
	cout << p->name << "正在吃饭" << endl;
}

void DogEat(Dog* d)
{
	cout << d->name << "正在吃狗粮, 汪汪" << endl;
}
void test01()
{
	Person person = { "老王",43 };  //老王正在吃饭
	Dog dog = { "旺财",6 };  //旺财正在吃狗粮, 汪汪
	PersonEat(&person);
	DogEat(&dog);
	//出现一个问题（数据 方法独立  容易造成 方法 调用错误数据）
	DogEat((Dog*)&person);  //老王正在吃狗粮, 汪汪(这个就不对了)
}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
