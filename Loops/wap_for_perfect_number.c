#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    if(sum==num)
    {
        printf("it is perfect number=%d",num);
    }
    else
    {
        printf("it is not a perfect number=%d",num);
    }
    return 0;
}