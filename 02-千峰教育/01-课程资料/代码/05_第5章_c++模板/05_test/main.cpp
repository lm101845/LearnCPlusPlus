#include <iostream>
#include <string.h>
using namespace std;

template<typename T>
void  myPintArrayTemplate(T *arr, int len)
{
    int i=0;
    for(i=0;i<len;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

template<typename T>
void mySortArrayTemplate(T *arr, int len)
{
    int i=0,j=0;
    for(i=0;i<len-1; i++)
    {
        int min = i;
        for(j=min+1; j<len;j++)
        {
            if(arr[min] > arr[j])
                min = j;
        }

        if(min != i)
        {
            T tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
    return;
}
int main(int argc, char *argv[])
{
    char str[]="hello template";
    int str_len = strlen(str);
    int arr[]={5,3,4,7,8,9,1,6,10};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    //用函数模板遍历数组
    myPintArrayTemplate(str, str_len);
    myPintArrayTemplate(arr, arr_len);

    //用函数模板对数组排序
    mySortArrayTemplate(str,str_len);
    mySortArrayTemplate(arr, arr_len);

    //用函数模板遍历数组
    myPintArrayTemplate(str, str_len);
    myPintArrayTemplate(arr, arr_len);

    return 0;
}
