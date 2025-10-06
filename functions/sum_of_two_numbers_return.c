#include<stdio.h>
int add(int x,int y);
int main()
{
    int a=12,b=18,total;
    total=add(a,b);
    printf("first time addition=%d\n",total);
    total=add(2,3);
    printf("%d\n",total);
    total=add(0,0);
    printf("%d\n",total);
    return 0;
}
int add(int x,int y)
{
    int s=x+y;
    printf("%d\n",s);
    return s+10;
}