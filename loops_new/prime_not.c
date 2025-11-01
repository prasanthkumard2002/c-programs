#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the  number:");
    scanf("%d",&num);
    int count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("it is a prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}