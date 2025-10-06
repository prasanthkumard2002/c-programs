#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num % 5==0 && num % 11==0)
    {
        printf("it is divisible by 5,11=%d",num);
    }
    else
    {
        printf("not divided by both=%d",num);
    }
    return 0;
}