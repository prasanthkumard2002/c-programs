#include<stdio.h>
int *funrtn(int *ptr);
int main()
{
    int arr1[4]={45,67,23,78};
    int *ptr1;
    ptr1=funrtn(arr1);
    printf("%d",*ptr1);
    return 0;
}
int *funrtn(int *ptr)
{
    printf("%d\n",*ptr);
    ptr=ptr+2;
    return ptr;
}
