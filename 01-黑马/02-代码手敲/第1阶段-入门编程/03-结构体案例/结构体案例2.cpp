//2024年11月15日12:09:29


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。

//1.设计英雄结构体
struct Hero {
	string name;
	int age;
	string sex;
};


void bubbleSort(struct Hero heroArray[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHeros(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << heroArray[i].name << " 性别： " << heroArray[i].sex << " 年龄： " << heroArray[i].age << endl;
	}
}

int main()
{

	//2.创建数组存放5名英雄
	struct Hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//for (int i = 0; i < len; i++) {
	//	cout << "姓名： " << heroArray[i].name << " 性别： " << heroArray[i].sex << " 年龄： " << heroArray[i].age << endl;
	//}
	// 
	//3.对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray,len);

	//4.将排序后结果打印输出
	printHeros(heroArray, len);
	system("PAUSE");
}
