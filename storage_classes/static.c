#include<stdio.h>
void count(void);
int main()
{
    count();
    count();
    count();
    return 0;
}
void count(void)
{
    static int count=0;
    count++;
    printf("%d\n",count);
}