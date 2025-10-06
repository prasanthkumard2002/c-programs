#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%100!=0)
    {
        if(num%4==0)
        printf("it is leap year");
        else
        printf("not leap year");
    }
    else if(num%400==0)
    {
        printf("it is leap year");
    }
    else
    printf("it is not leap");

    return 0;
}