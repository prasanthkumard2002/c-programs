#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    if(count==2)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
    return 0;
}