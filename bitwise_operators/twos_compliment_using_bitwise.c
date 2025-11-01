#include<stdio.h>
void displaybits(int z);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%x",&num);
    displaybits(num);
    printf("enter number=%x\n",num);
    num=~num+1;
    displaybits(num);
    printf("now after twos compliment number=%x\n",num);
    return 0;
}
void displaybits(int z)
{
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((z&mask)==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        if(i%8==0)
        {
            printf(" ");
        }
    }
}
