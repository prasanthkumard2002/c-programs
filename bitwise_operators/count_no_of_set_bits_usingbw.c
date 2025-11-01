#include<stdio.h>
void displaybits(int z);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%x",&num);
    displaybits(num);
    printf("enter number is:%x\n",num);
    return 0;
}
void displaybits(int z)
{
    int count=0;
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
            count++;
        }
        if(i%8==0)
        {
            printf(" ");
        }
    }
    printf("the number of set bits=%d\n",count);
}
    
