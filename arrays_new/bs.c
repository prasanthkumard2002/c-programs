#include<stdio.h>
int main()
{
    int arr[]={11,22,33,44,55,66,77,88,99,100};
    int n=10,data;
    printf("enter the data:");
    scanf("%d",&data);
    int r=n-1,l=0;
    int flag=0,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==arr[mid])
        {
            printf("the data element location=%d",mid);
            flag=1;
            break;
        }
        else if(data>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(flag==0)
    {
        printf("oops...data not found");
    }

}