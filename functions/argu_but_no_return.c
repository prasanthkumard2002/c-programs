#include<stdio.h>
void add(int c,int d);
int main()
{
    int a=10,b=20;
    add(a,b);
    return 0;
}
void add(int c,int d)
{
    int sum=c+d;
    printf("%d\n",sum);
}