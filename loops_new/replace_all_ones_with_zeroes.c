#include<stdio.h>
int main()
{
    int arr[10];
    int i=0,num,rem;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(rem==1)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=rem;
        }
        i++;
        num/=10;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}