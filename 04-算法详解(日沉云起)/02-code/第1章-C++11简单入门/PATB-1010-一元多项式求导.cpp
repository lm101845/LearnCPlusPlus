//2023��5��31��09:25:41
//https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805313708867584
#include<bits/stdc++.h>  
using namespace std;
using gg = long long;
#include<iostream>
//д�����������ϴ������£�
int main() {
	ios::sync_with_stdio(false);  //ȡ��C++�����������stdio����ͬ��
	cin.tie(0);    //���cin��cout�İ�
	gg ci,ei;  //ciΪϵ����eiΪָ��
	bool space = false;
	while (cin >> ci >> ei) {
		ci *= ei;
		--ei;
		if (ci != 0) {
			cout << (space ? " " : "") << ci << " " << ei;
			space = true;
		}
	}
	if (not space)
		cout << "0 0";
	system("PAUSE");
	return 0;
}