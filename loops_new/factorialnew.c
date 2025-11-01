#include<stdio.h>
int main()
{
    int num,sum=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        printf("%d\t\n",i);
        sum=sum*i;
    }
    printf("the factorial of given number is %d",sum);
}