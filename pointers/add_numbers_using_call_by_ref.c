#include<stdio.h>
int addnum(int *p,int *q);
int main()
{
    int a=5,b=6,res;
    res=addnum(&a,&b);
    printf("from returning=%d\n",res);
    return 0;
}
int addnum(int *p,int *q)
{
    int sum;
    sum=*p+*q;
    printf("add nums through call by ref=%d\n",sum);
    return sum;
}