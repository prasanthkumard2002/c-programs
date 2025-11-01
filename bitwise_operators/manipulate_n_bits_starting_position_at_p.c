#include<stdio.h>
void displaybits(int q);
int main()
{
    int x=0,y=45,z=0;
    int p,n;
    printf("enter starting position:");
    scanf("%d",&p);
    printf("enter no.of bits to be manipulated from starting position p:");
    scanf("%d",&n);
    int mask=~(~0<<n)<<p-n+1;
    // initial x value//
    displaybits(x);
    printf("x=%d\n",x);
    //set bits//
    x=x|mask;
    displaybits(x);
    printf("x=%d\n",x);
    // clear bits//
    y=y&~mask;
    displaybits(y);
    printf("y=%d\n",y);
    //toggle bits//
    z=z^mask;
    displaybits(z);
    printf("z=%d\n",z);
}
void displaybits(int q)
{
    for(int i=31;i>=0;i--)
    {
        int mask1=1<<i;
        if((q&mask1)==0)
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