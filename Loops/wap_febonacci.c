#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int a=0,b=1,sum=a+b;
    while(sum<=num)
    {
        printf("%d\n",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
    return 0;
}