#include<stdio.h>
int main()
{
    int num,rem,i,sum=1,sumtotal=0,original;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        sum=1;
        rem=num%10;
        for(i=rem;i>0;i--)
        {
            printf("%d\t\n",i);
            sum=sum*i;
        }
        sumtotal=sumtotal+sum;
        num=num/10;
    }
    printf("%d\n",sumtotal);
    if(original==sumtotal)
    {
        printf("it is strong number\n");
    }
    else
    {
        printf("it is not strong number\n");
    }
    return 0;
}