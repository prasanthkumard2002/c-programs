#include<stdio.h>
void add(void);
int main()
{
    int a=10,b=20;
    add();
    return 0;

}
void add(void)
{
    int d=2,e=4,sum=d+e;
    printf("%d\n",sum);
}