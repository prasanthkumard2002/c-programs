#include<stdio.h>
void displaybits(int z);
int main()
{
    int x,y,p,n,c;
    printf("enter the starting position p:");
    scanf("%d",&p);
    printf("enter number of bits replacing from p:");
    scanf("%d",&n);
    printf("enter x value:");
    scanf("%x",&x);
    printf("enter y value:");
    scanf("%x",&y);
    displaybits(x);
    printf("x value=%x\n",x);
    displaybits(y);
    printf("y value=%x\n",y);
    int mask=~(~0<<n)<<p-n+1;
    x=x &~ mask;
    displaybits(x);
    printf("the x value=%x\n",x);
    y=y&mask;
    displaybits(y);
    printf("the y value=%x\n",y);
    c= x | y;
    displaybits(c);
    printf("after replacing:%x\n",c);
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