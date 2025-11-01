#include<stdio.h>
int main()
{
    int arr1[5]={12,34,35,27,78};
    int *ptr;
    ptr=arr1;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}