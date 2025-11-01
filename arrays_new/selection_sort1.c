#include<stdio.h>
int main()
{
    int arr[]={78,89,45,23,45,93};
    int n=6,i,j,temp;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

    
}