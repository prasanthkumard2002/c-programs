#include<stdio.h>
int main()
{
    int arr[]={11,22,33,43,54,62,67,78,89,99};
    int n=10,data;
    int i;
    int left=0,right=n-1;
    printf("enter the data:");
    scanf("%d",&data);
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]==data)
        {
            printf("data found at index %d",i);
            break;
        }
    }
    if(i==10)
    {
        printf("data not found");
    }
}