#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=num;num>=1;num--)
    {
        printf("%d\n",num);
        fact=fact*num;
    }
    printf("factorial of given number=%d",fact);
    return 0;
}