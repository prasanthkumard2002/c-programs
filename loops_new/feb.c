#include<stdio.h>
int main()
{
    int a=0,b=1;
    int c=a+b;
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    while(c<=num)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}