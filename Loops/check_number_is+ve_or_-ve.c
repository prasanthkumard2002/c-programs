#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is possitive=%d\n",num);
    }
    else if(num<0)
    {
        printf("the number is negative=%d\n",num);
    }
    else
    {
        printf("it is zero=%d",num);
    }
    return 0;
}