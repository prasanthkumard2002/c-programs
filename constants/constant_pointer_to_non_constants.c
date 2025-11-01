#include<stdio.h>
int main()
{
    int a=10,b=30;
    int *const ptr=&a;
    printf("%d\n",*ptr);
    //ptr=&b;//  address cannot be changed only value changed
    *ptr=40;
    printf("%d\n",*ptr);
    return 0;
}