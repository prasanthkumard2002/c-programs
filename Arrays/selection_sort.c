#include<stdio.h>
int main()
{
    int arr[]={100,40,70,30,45};
    int n=5,temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
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
    for(int k=0;k<n;k++)
        {
            printf("%d\t",arr[k]);
        }
        printf("\n");
        
    return 0;
}