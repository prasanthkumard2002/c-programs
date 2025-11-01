#include<stdio.h>
#include<math.h>
int main()
{
    int binum,rem,sum1=0,i=0;
    printf("enter the binary number:");
    scanf("%d",&binum);
    while(binum!=0)
    {
        rem=binum%10;
        sum1=sum1+rem*pow(2,i);
        binum=binum/10;
        i++;
    }
    printf("binary to decimal=%d\n",sum1);
    return 0;
}