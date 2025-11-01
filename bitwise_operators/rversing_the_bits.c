#include<stdio.h>
void displaybits(int x);
void displaybits1(int x);
int main()
{
    int num;
    printf("enter any number:");
    scanf("%x",&num);
    displaybits(num);
    printf("num=%x\n",num);
    displaybits1(num);
    printf("rev=%x\n",num);
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
void displaybits1(int x)
{
    for(int i=0;i<=31;i++)
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
        
    }
}