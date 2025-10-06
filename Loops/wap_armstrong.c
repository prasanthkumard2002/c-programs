#include<stdio.h>
int main()
{
    int num,rem,cube,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    int original=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        cube=rem*rem*rem;
        sum=sum+cube;
        printf("%d\n",sum);
    }

    if(original==sum)
    {
        printf("it is armstrong=%d",original);
    }
    else
    {
        printf("it is not a armstrong=%d",original);
    }
    return 0;
}