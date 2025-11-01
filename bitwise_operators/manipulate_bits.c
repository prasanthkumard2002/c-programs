#include<stdio.h>
void displaybits(int z);
int main()
{
    int num,mask,p,n;
    printf("enter starting position:");
    scanf("%d",&p);
    printf("enter the no.of bits manipulated from point p:");
    scanf("%d",&n);
    printf("enter the number:");
    scanf("%x",&num);
    displaybits(num);
    printf("%d\n",num);
    mask=~(~0<<n)<<p-n+1;
    num=num&~mask;
    displaybits(num);
    printf("%d\n",num);
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