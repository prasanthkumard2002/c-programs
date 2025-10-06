#include<stdio.h>
int main()
{
    int num,total=1;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=num;num>=1;num--)
    {
        printf("%d\n",num);
        total=total*num;
    }
    printf("the factorial of a given number=%d\n",total);
    return 0;
}