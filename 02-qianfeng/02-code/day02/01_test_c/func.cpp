//2022年12月11日14:19:21

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	//C语言的const修饰全局变量的时候，默认是外部链接的
//	//外部链接：其他源文件可以使用
//	const int num = 100;   //只读的全局变量
//	system("pause");
//	return EXIT_SUCCESS;
//}


//const修饰的全局变量，默认是内部链接(只在当前源文件有效,不能直接用于其他源文件)
//如果必须用在其他源文件，使用只读的全局变量，必须加extern将apple转换成外部链接
const int apple = 100;