#include<stdio.h>
int maxtwo(int *p,int *q);
int main()
{
    int max;
    int a=10,b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    max=maxtwo(&a,&b);
    printf("the max value=%d\n",max);
    return 0;
}
int maxtwo(int *p,int *q)
{
    if(*p>*q)
    {
        return *p;
    }
    else
    {
        return *q;
    }
}
