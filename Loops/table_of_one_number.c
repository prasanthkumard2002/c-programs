#include<stdio.h>
int main()
{
    int num;
    printf("enter the table number");
    scanf("%d",&num);
    for(int i=1;i<=20;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}