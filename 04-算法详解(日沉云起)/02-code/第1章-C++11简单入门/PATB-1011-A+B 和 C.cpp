//2023年5月31日10:07:25
//https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805312417021952
#include<bits/stdc++.h>  
using namespace std;
using gg = long long;
#include<iostream>

//我写的代码
//int main() {
//	ios::sync_with_stdio(false);  //取消C++输入输出流与stdio流的同步
//	cin.tie(0);    //解除cin和cout的绑定
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

//书上给的代码
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