#include<stdio.h>
int main()
{
    int arr[]={7,4,8,7,9};
    int *ptr;
    ptr=arr;
    int sum=0,i;
    for(i=0;i<5;i++)
    {
       sum=sum+*(ptr+i);
    }
    printf("total sum=%d\n",sum);
}