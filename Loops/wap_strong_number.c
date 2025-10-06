#include<stdio.h>
int main()
{
    int num,rem,sum=0,fact=1,original;
    printf("enter a number");
    scanf("%d",&num);
    original=num;
    while(num>0)
    {
        rem=num%10;
        for(int i=rem;rem>=1;rem--)
        {
            printf("%d\n",rem);
            fact=fact*rem;
        }
        sum=sum+fact;
        num=num/10;
        fact=1;
        printf("the final sum=%d\n",sum);
    }

    if(sum==original)
    {
        printf("it is a strong number=%d",original);
    }
    else
    {
        printf("it is not a strong number=%d",original);
    }
    return 0;
}