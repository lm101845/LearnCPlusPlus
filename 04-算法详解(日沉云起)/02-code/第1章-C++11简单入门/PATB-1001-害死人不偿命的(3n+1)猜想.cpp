//2023��5��31��09:01:39
//https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805325918486528
#include<bits/stdc++.h>  
using namespace std;
using gg = long long;
#include<iostream>

//�Լ�д�Ĵ���
//int main() {
//	ios::sync_with_stdio(false);  //ȡ��C++�����������stdio����ͬ��
//	cin.tie(0);    //���cin��cout�İ�
//	
//	unsigned int n;
//	cin >> n;
//	int count = 0;
//	while (n != 1) {
//		if (n % 2 == 0) {
//			n = n / 2;
//		}
//		else {
//			n = (3 * n + 1) / 2;
//		}
//		count = count + 1;
//	}
//	cout << "һ��Ҫ��" << count << "��" << "\n";
//	system("PAUSE");
//	return 0;
//}

//���ϸ��Ĵ���д������д�ı��ҵĺ�
int main() {
	ios::sync_with_stdio(false);  
	cin.tie(0);    
	gg ni, ans = 0;
	cin >> ni;
	for (; ni != 1; ++ans) {
		if (ni % 2 == 1) {
			ni = 3 * ni + 1;
		}
		ni /= 2;
	}
	cout <<  ans ;
	return 0;
}