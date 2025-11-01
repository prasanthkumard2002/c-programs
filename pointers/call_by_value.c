#include<stdio.h>
void callbyvalue(int x);
int main()
{
    int a=10;
    printf("in main a=%d\n",a);
    callbyvalue(a);
    printf("in main a=%d\n",a);
    return 0;
}
void callbyvalue(int x)
{
    x=x+10;
    printf("in fun defination x=%d\n",x);
}