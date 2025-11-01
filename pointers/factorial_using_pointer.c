#include<stdio.h>
int main()
{
    int num,sum=1;
    printf("enter the number:");
    scanf("%d",&num);
    int *ptr=&num;
    printf("entered number=%d\n",*ptr);
    while(*ptr!=0)
    {
        //*ptr=(*ptr)*1;//
        printf("%d\n",*ptr);
        sum=sum*(*ptr);
        (*ptr)--;
    }
    printf("the factorial of number=%d\n",sum);
    return 0;
}