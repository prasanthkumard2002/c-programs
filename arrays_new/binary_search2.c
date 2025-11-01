#include<stdio.h>
int main()
{
    int arr[10]={11,22,33,44,45,56,67,78,89,98};
    int n=10,found=0;
    int left=0,right=n-1;
    int data;
    printf("enter the data:");
    scanf("%d",&data);
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(data==arr[mid])
        {
            printf("data is found at %d",mid);
            found=1;
            break;
        }
        else if(data<arr[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    if(found==0)
    {
        printf("data not found");
    }
}