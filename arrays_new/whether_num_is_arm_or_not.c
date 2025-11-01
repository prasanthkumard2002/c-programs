#include<stdio.h>
int main()
{
    int num,rem,pro,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    int original=num;
    while(num!=0)
    {
        rem=num%10;
        pro=rem*rem*rem;
        sum=sum+pro;
        num=num/10;
    }
    if(sum==original)
    {
        printf("it is a armstrong\n");
    }
    else
    {
        printf("not a armstrong\n");
    }
    return 0;
}