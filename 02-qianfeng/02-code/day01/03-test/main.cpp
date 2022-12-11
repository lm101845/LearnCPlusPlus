//2022年12月11日10:26:07
#include <iostream>
//使用标准的命名空间std
//std中的所有成员名，可以直接使用(如cout就是属于std的)
//cout end cin都是命名空间std的成员
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    //std::cout << "Hello World!" << std::endl;
    //如果前面不写using namespace std;我们就要这样写了
    return 0;
}
