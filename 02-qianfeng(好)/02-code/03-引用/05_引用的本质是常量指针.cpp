//2023年2月4日12:41:55
/**
引用的本质在 c++内部实现是一个指针常量. 
Type& ref = val; // Type* const ref =&val;
c++编译器在编译过程中使用常指针作为引用的内部实现，因此引用所占用的空间
大小与指针相同，只是这个过程是编译器内部实现，用户不可见。

指针常量(指针本身是常量，所指地址不能被改变，直至生命周期结束，但所指内容可以被改变)： int* const p;
(加一个const,这个指针就只能指向一个地址了，就不能瞎指了)


常量指针(指向常量的指针，该指针不能指向变量，不能更改所指内容)： const int* p;
*/
#include <iostream>
using namespace std;

void test01()
{

}

int main(int argc, char* argv[])
{
	test01();
	system("PAUSE");
}
