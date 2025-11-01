#include<stdio.h>
void funpointer(int x,int y);
int main()
{
    int a=20,b=30;
    void (*fptr) (int,int);
    fptr=funpointer;
    (*fptr)(a,b);
    return 0;
}
void funpointer(int x,int y)
{
    int res=x+y;
    printf("%d\n",res);
}