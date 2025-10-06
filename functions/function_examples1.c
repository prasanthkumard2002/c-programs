#include<stdio.h>
int funct(int x,int y);
int main()
{
    int a=10,b=22;
    int s=funct(a,b);
    printf("%d",s);
    return 0;
}
int funct(int x,int y)
{
    return (x-y);
}
