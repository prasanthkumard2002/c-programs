#include<stdio.h>
int main()
{
    int arr1[5]={45,67,78,11,100};
    int (*ptr)[5];
    ptr=&arr1;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",(*ptr)[i]);
    }
    return 0;
}