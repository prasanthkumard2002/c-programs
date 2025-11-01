#include<stdio.h>
int displaybits(int x);
int count=0;
int main()
{
    int num,p;
    printf("enter the number:");
    scanf("%x",&num);
    p=displaybits(num);
    printf("the number of set bits=%x",p);
    return 0;
}
int displaybits(int x)
{
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((x&mask)!=0)
        {
            count++;
        }
    }
  return count;
}