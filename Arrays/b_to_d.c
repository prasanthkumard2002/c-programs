#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0,i=0;
    printf("enter the binary number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*pow(2,i);
        num=num/10;
        i++;
    }
    printf("the bin to decimal value=%d\n",sum);
}