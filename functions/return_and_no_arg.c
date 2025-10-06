#include<stdio.h>
int funct(void);
int main()
{
    int a=10,b=22;
    int s=funct();
    printf("from function defination:%d",s);
    return 0;
}
int funct(void)
{
    int x=12,y=13;
    return (x-y);
}
