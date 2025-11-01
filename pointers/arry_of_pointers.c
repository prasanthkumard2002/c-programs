#include<stdio.h>
int main()
{
    int *ptr[5];
    int i;
    int arr[5]={45,56,89,36,78};
    for(i=0;i<5;i++)
    {
        ptr[i]=&arr[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",*ptr[i]);
    }
    return 0;
}