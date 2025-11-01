#include<stdio.h>
void displaybits(int x);
int main()
{
    int a,b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value");
    scanf("%d",&b);
    displaybits(a);
    printf("a=%d\n",a);
    displaybits(b);
    printf("b=%d\n",b);
    a=a^b;
    b=a^b;
    displaybits(b);
    printf("after swapping b=%d\n",b);
    a=b^a;
    displaybits(a);
    printf("after swapping a=%d\n",a);
    return 0;
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
        if((i%8)==0)
        {
            printf(" ");
        }
    }
}