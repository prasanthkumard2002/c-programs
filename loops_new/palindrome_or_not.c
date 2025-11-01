#include<stdio.h>
int main()
{
    int num,nnum,reversed=0;
    int i=0;
    printf("enter the number:");
    scanf("%d",&num);
    int new=num;
    while(num!=0)
    {
        nnum=num%10;
        reversed=reversed*10+nnum;
        num=num/10;
    }

    if(new==reversed)
    {
        printf("it is palindrome=%d",reversed);
    }
    else
    {
        printf("it is not a palindrome=%d",new);
    }
    return 0;
}