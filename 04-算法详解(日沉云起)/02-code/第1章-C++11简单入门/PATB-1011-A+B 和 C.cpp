//2023��5��31��10:07:25
//https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805312417021952
#include<bits/stdc++.h>  
using namespace std;
using gg = long long;
#include<iostream>

//��д�Ĵ���
//int main() {
//	ios::sync_with_stdio(false);  //ȡ��C++�����������stdio����ͬ��
//	cin.tie(0);    //���cin��cout�İ�
//	gg i,count,a,b,c;
//	cin >> count;
//	for (i = 0; i < count; i++) {
//		cin >> a >> b >> c;
//		if (a + b - c > 0) {
//			cout << "Case #" << i + 1 << ":true"<<"\n";
//		}else {
//			cout << "Case #" << i + 1 << ":false" << "\n";
//		}
//	}
//	system("PAUSE");
//	return 0;
//}

//���ϸ��Ĵ���
int main() {
	ios::sync_with_stdio(false);  
	cin.tie(0);    
	gg ti, ai, bi, ci;
	cin >> ti;
	for (gg i = 1; i <= ti; ++i) {
		cin>>ai>>bi>>ci;
		cout<<"Case #" <<i<<":"<< (ai + bi > ci ? "true" : "false") << "\n";
	}
	system("PAUSE");
	return 0;
}