#include<stdio.h>
int main()
{
    int arr[]={19,76,12,65,99,100};
    int n=6,temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%d\t",arr[k]);
    }
    return 0;
}