#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    for_each(v.begin(),v.end(), [](int val){cout<<val<<" ";});
    return 0;
}
