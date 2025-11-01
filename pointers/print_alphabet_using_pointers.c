#include<stdio.h>
int main()
{
    int start_ascii;
    printf("enter starting ascii number:");
    scanf("%d",&start_ascii);
    int end_ascii;
    printf("enter end ascii_number:");
    scanf("%d",&end_ascii);
    int i;
    int *ptr;
    ptr=&i;
    for(i=start_ascii;i<=end_ascii;i++)
    {
        printf("%c\t",*ptr);
    }

}