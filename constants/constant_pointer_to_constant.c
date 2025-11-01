#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    const int *const ptr=&a;
    printf("%d\n",*ptr);
    //*ptr=30  it is not possible//
    //ptr=&b it is also not possible//
    return 0;
}