#include<stdio.h>
int main()
{
    int arr[8];
    int i;
    for(i=0;i<8;i++)
    {
        printf("enter the array values:");
        scanf("%d",&arr[i]);
    }
    printf("his name is:");
    for(i=0;i<8;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}