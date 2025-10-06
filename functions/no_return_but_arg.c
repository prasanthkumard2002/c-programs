#include<stdio.h>
void funct(int x,int y);
int main()
{
    int a=10,b=22;
    funct(a,b);
    return 0;
}
void funct(int x,int y)
{
    int d=(x+y);
    printf("%d",d);
}
