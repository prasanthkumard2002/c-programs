#include<stdio.h>
int add(int c,int d);
int main()
{
    int a=10,b=20;
    printf("%d\n",add(a,b));
    return 0;
}
int add(int c,int d)
{
    int sum=c+d;
    printf("%d\n",sum);
    return sum+1;
}