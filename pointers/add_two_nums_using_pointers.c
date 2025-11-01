#include<stdio.h>
int main()
{
    int a=10,b=20,res;
    int *ptr1=&a;
    int *ptr2=&b;
    res=*ptr1+*ptr2;
    printf("the sum=%d\n",res);
    return 0;
}