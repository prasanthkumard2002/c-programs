#include<stdio.h>
int main()
{
    int a=20,b=50;
    void *vpt;
    vpt=&a;
    printf("%d\n",*(int*)vpt);
    return 0;
}