#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("enter a1,a2,a3 values:");
    scanf("%d,%d,%d",&a1,&a2,&a3);
    int sum=a1+a2+a3;
    if(sum==180)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle not valid");
    }
    return 0;

}