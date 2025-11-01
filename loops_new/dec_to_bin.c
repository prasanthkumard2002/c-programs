#include<stdio.h>
int main()
{
    int arr[10];
    int num,rem;
    printf("enter the number:");
    scanf("%d",&num);
    int i=0;
    while(num!=0)
    {
        rem=num%2;
        arr[i]=rem;
        num=num/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}