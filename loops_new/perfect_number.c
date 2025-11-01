#include<stdio.h>
int main()
{
    int num,sum=0,original;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    if(original==sum)
    {
        printf("it is perfect number\n");
    }
    else
    {
        printf("not a perfect number\n");
    }
    return 0;
}