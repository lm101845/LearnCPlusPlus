//2024��11��13��11:58:54

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//ð��������
//����1��������׵�ַ
//����2�����鳤��
void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		//�ڲ�ѭ���ıȽϴ�����Խ��Խ��
		for (int j = 0; j < len - i - 1; j++) {
			//���j > j+1��ֵ  ��������
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��ӡ����
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << "arrԪ��" << arr[i] << endl;
	}
}
//��װһ������������ð������ʵ�ֶ������������������
int main()
{
	//1.�ȴ���һ������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	/**
	*��C++�У�ԭ�����飨�� int arr[10];�������ṩ .length �����Ƶĳ�Ա������ֱ�ӻ�ȡ�䳤�ȡ�
	 C++����Ĵ�С���ڱ���ʱȷ���ģ�����������ʱ����Я�������䳤�ȵ�ֱ����Ϣ
	����ĳЩ�߼�������Java��Python�е�����/�б�ͬ����Ҫ��ȡC++����ĳ��ȣ�
	 ��ͨ����Ҫʹ�� sizeof ������������������ֶ����㡣
	*/

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.����������ʵ��ð������
	bubbleSort(arr, len);
	//3.��ӡ����������
	printArray(arr, len);
	system("PAUSE");
}
