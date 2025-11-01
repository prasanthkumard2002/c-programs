#include<stdio.h>
int main()
{
    char str1[]="prasanth";
    char *ptr;
    ptr=str1;
    int count =0;
    while(*ptr!='\0')
    {
        ptr++;
        count++;
    }
    printf("count=%d\n",count);

}