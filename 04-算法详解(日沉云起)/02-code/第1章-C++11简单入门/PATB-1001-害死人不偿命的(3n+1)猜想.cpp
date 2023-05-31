//2023年5月31日09:01:39
//https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805325918486528
#include<bits/stdc++.h>  
using namespace std;
using gg = long long;
#include<iostream>

//自己写的代码
//int main() {
//	ios::sync_with_stdio(false);  //取消C++输入输出流与stdio流的同步
//	cin.tie(0);    //解除cin和cout的绑定
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
//	cout << "一共要砍" << count << "次" << "\n";
//	system("PAUSE");
//	return 0;
//}

//书上给的代码写法——写的比我的好
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