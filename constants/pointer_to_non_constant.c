#include<stdio.h>
int main()
{
    int a=20,b=50;
    int *ptr;
    ptr=&a;
    printf("%d\n",*ptr);
    ptr=&b;
    printf("%d\n",*ptr);
    return 0;
}