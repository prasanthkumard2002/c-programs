#include<stdio.h>
void displaybits(int z);
int main()
{
    int x,y,p,q,c;
    int mask=~(~0<<q)<<p-q+1;
    printf("enter the starting position of p:");
    scanf("%d",&p);
    printf("enter how many bits u want to change from p position:");
    scanf("%d",&q);
    printf("enter x value:");
    scanf("%x",&x);
    printf("enter y value:");
    scanf("%x",&y);
    displaybits(x);
    printf("x=%d\n",x);
    displaybits(y);
    printf("y=%d\n",y);
    x=x&~mask;
    displaybits(x);
    printf("x=%d\n",x);
    y=y&mask;
    displaybits(y);
    printf("y=%d\n",y);
    c= x | y;
    return 0;
}
void displaybits(int z)
{
    for(int i=31;i>=0;i--)
    {
        int mask1=1<<i;
        if((z&mask1)==0)
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