#include<stdio.h>
void displaybits(int z);
int main()
{
    int p,n,zvalue;
    printf("enter the starting position of bits of p:");
    scanf("%d",&p);
    printf("enter number of bits to be set from p and towards right:");
    scanf("%d",&n);
    int mask1=~(~0<<n)<<p-n+1;
    printf("enter zvalue:");
    scanf("%x",&zvalue);
    displaybits(zvalue);
    printf("zvalue=%x\n",zvalue);
    zvalue=zvalue|mask1;
    displaybits(zvalue);
    printf("after setting of z value bits=%x\n",zvalue);
    printf("i want to be cleared:\n");
    zvalue=zvalue&~mask1;
    displaybits(zvalue);
    printf("again iam clearing same bits:%x\n",zvalue);
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