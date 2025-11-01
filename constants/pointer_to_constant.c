#include<stdio.h>
int main()
{
    int a=10,b=20;
    const int *ptr;
    ptr=&a;
    printf("%d\n",*ptr);
    //*ptr=24;//  value cannot be changed only adress change
    ptr=&b;
    printf("%d\n",*ptr);
    return 0;
}