//2024年11月15日11:50:49

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//最终打印出老师数据以及老师所带的学生数据。

//学生的结构体定义
struct Student {
	string sName;
	int score;
};

//老师的结构体定义
struct Teacher {
	string tName;
	struct Student sArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len) {
	string tName = "教师";
	string sName = "学生";
	string nameSeed = "ABCDE";
	int sNum = 5;
	//外侧给老师赋值
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < sNum; j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeachers(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t姓名：" << tArray[i].sArray[j].sName << " 分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>

	//1.创建3名老师的数组
	struct Teacher tArray[3];
	//2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3.打印所有老师及所带的学生信息
	printTeachers(tArray, len);
	system("PAUSE");
}

