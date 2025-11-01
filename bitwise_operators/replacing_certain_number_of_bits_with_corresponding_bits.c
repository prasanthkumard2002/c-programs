#include<stdio.h>
void displaybits(int z);
int main()
{
    int a,b,p,n,mask1,c;
    printf("enter starting position of p:");
    scanf("%d",&p);
    printf("enter no of bits to be cleared from position p:");
    scanf("%d",&n);
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    mask1=~(~0<<n)<<p-n+1;
    displaybits(a);
    printf("a=%d\n",a);
    displaybits(b);
    printf("b=%d\n",b);
    a=a&~mask1;
    displaybits(a);
    printf("a=%d\n",a);
    b=b&mask1;
    displaybits(b);
    printf("b=%d\n",b);
    c=a|b;
    displaybits(c);
    printf("the replacing of some bit positions of x in y: is at stored in c=%d\n",c);
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