#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("the reversed number=%d\n",rev);
}