#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    int i=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*pow(2,i);
        num=num/10;
        i++;
    }
    printf("the bin to dec=%d\n",sum);
}