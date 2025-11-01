#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the 1st number:");
    scanf("%d",&num1);
    printf("enter the 2nd number:");
    scanf("%d",&num2);
    if(!(num1^num2))
    {
        printf("both are equal\n");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}