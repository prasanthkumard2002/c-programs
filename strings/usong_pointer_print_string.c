#include<stdio.h>
int main()
{
    char strarr[]="prashu";
    char *ptr;
    ptr=strarr;
    while(*ptr!='\0')
    {
        printf("%c\t",*ptr);
        printf("address of character=%p\n",ptr);
        ptr++;
        
    }
    return 0;
}