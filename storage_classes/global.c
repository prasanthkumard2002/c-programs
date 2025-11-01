#include<stdio.h>
void funglobal(void);
int a=10;
int main()
{
    printf("%d\n",a);
    funglobal();
}
void funglobal(void)
{
    printf("in another function a=%d\n",a);
}