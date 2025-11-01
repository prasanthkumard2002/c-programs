#include<stdio.h>
int main()
{
    int num,i=0,rem,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("the sum of digits=%d",sum);
    return 0;
}