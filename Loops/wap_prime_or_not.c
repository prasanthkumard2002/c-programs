#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int prime=1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        prime=0;
    }
    if(prime==1)
    {
        printf("it is a prime=%d",num);
    }
    else
    {
        printf("it is not a prime=%d",num);
    }
    return 0;

}