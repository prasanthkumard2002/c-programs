#include<stdio.h>
int main()
{
    int num,reversed=0,remainder,original;
    printf("enter the number");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }
    if(original==reversed)
    {
        printf("it is palindrome=%d",original);
    }
    else
    {
        printf("it is not palindrome=%d",original);
    }
    return 0;
}