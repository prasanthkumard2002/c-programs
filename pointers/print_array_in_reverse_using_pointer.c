#include<stdio.h>
int main()
{
    int arr[]={34,25,78,99,23,45};
    int *ptr=arr;
    int i,n=6;
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}