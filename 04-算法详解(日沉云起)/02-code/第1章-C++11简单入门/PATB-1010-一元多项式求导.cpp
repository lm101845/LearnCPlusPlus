//2023年5月31日09:25:41
//https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805313708867584
#include<bits/stdc++.h>  
using namespace std;
using gg = long long;
#include<iostream>
//写不出来，书上代码如下：
int main() {
	ios::sync_with_stdio(false);  //取消C++输入输出流与stdio流的同步
	cin.tie(0);    //解除cin和cout的绑定
	gg ci,ei;  //ci为系数，ei为指数
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