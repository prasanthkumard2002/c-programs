#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("it is prime\n");
    }
    else
    {
        printf("not prime\n");
    }
    return 0;
}