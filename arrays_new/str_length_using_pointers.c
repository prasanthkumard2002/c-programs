#include<stdio.h>
int main()
{
    char str1[]="kumar";
    char *ptr=str1;
    int count =0;
    while(*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
        count++;
    }
    printf("%d",count);
}