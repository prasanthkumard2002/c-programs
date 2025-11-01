#include<stdio.h>
int main()
{
    char str1[]="pras";
    char *ptr=str1;
    while(*ptr!='\0')
    {
        printf("%c\t",*ptr);
        printf("%p\n",ptr);
        ptr++;
    }
}