#include<stdio.h>
void displaybits(int x);
int main()
{
    int num;
    printf("enter any number:");
    scanf("%x",&num);
    displaybits(num);
    printf("num=%x\n",num);
    num=(~num+1);
    displaybits(num);
    printf("after 2s compliment num=%d\n",num);
    return 0;
}
void displaybits(int x)
{
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((x&mask)==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        if((i%8)==0)
        {
            printf(" ");
        }
    }
}