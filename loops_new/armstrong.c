#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    int original=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(original==sum)
    {
        printf("it is a armstrong number");
    }
    else
    {
        printf("it is not armstrong");
    }
    return 0;
}