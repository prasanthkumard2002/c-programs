#include<stdio.h>
void funct(void);
int main()
{
    int a=10,b=22;
    funct();
    return 0;
}
void funct(void)
{
    int a=10,b=20;
    printf("in function defination:%d",(a+b));
}
