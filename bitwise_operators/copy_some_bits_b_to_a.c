#include<stdio.h>
void displaybits(int z);
int main()
{
    int x,y,p,n,res;
    printf("enter the starting position of p:");
    scanf("%d",&p);
    printf("enter number of bits to be replaced:");
    scanf("%d",&n);
    printf("enter x value:");
    scanf("%d",&x);
    printf("enter y value:");
    scanf("%d",&y);
    displaybits(x);
    printf("x=%d\n",x);
    displaybits(y);
    printf("y=%d\n",y);
    printf("clearing of bits from x of p to n \n");
    int mask1=~(~0<<n)<<p-n+1;
    x=x&~mask1;
    displaybits(x);
    printf("after clearing of bits:%d\n",x);
    printf("testing of bits from y of p to n \n");
    y=y&mask1;
    displaybits(y);
    printf("after testing of y bits of p to n=%d\n",y);
    printf("now i want to replace y bits with x at position p to n \n");
    res=x | y;
    displaybits(res);
    printf("after replacing x should be%d\n",res);
    return 0;
}
void displaybits(int z)
{
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((mask&z)==0)
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