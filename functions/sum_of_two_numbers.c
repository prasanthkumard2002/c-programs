#include<stdio.h>
int add(int x,int y);
int main()
{
    int a=12,b=18;
    add(a,b);
    return 0;
}
int add(int x,int y)
{
    int sum=x+y;
    printf("the sum=%d\n",sum);
    return sum;
}