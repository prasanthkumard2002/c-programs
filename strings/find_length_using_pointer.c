#include<stdio.h>
int main()
{
    char str1[]="prasanth";
    char *ptr=str1;
    int count=0;
    while(*ptr!='\0')
    {
        printf("%c\t",*ptr);
        ptr++;
        count++;
    }
    printf("length=%d\n",count);
}