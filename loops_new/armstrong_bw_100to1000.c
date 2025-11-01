#include<stdio.h>
int main()
{
    int rem,sum;
    int original;
    for(int i=100;i<=999;i++)
    {
        original=i;
        sum=0;
        while(original!=0)
        {
            rem=original%10;
            sum=sum+(rem*rem*rem);
            original=original/10;
        }
        if(i==sum)
        {
            printf("the armstrongs are %d\n",i);
        }
    }
    return 0;
}