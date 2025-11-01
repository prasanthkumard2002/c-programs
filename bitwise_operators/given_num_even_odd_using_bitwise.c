#include<stdio.h>
void displaybits(int x);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    displaybits(num);
    printf("number=%d\n",num);
    if((num&num-1)==0)
    {
        displaybits(num&num-1);
        printf(": %d is a exact power of 2\n",num);
    }
    else
    {
        displaybits(num&num-1);
        printf(": %d is not a exact power of 2\n",num);
    }

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
        if(i%8==0)
        {
            printf(" ");
        }
    }
}