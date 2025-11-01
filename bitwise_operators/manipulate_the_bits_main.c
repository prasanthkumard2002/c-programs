#include<stdio.h>
void displaybits(int z);
int main()
{
    int num,p,n;
    printf("enter the starting position of p:");
    scanf("%d",&p);
    printf("enter number of bits to be set/clear/toggle/test from position p:");
    scanf("%d",&n);
    int mask=~(~0<<n)<<p-n+1;
    printf("enter the number:");
    scanf("%x",&num);
    displaybits(num);
    printf("entered number=%x\n",num);
    //set the bits//
    num=num | mask;
    displaybits(num);
    printf("the setting bits value=%x\n",num);
    //clearing bits//
    num=num &~ mask;
    displaybits(num);
    printf("after clearing bits=%x\n",num);
    //toggling//
    num=num^mask;
    displaybits(num);
    printf("after toggling bits=%x\n",num);
    //test bits//
    num=num&mask;
    displaybits(num);
    printf("after testing bits=%x\n",num);
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