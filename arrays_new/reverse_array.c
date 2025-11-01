#include<stdio.h>
int main()
{
    int temp;
    int arr[5]={11,22,33,44,55};
    for(int i=0,j=5-1;i<=j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

}