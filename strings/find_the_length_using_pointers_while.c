#include<stdio.h>
int main()
{
    char name[]="prasanth";
    char *ptr=name;
    int i=0;
    int count=0;
    while(*ptr!='\0')
    {
        printf("%c\t",*ptr);
        printf("%p\n",ptr);
        ptr++;
        count++;
    }
    printf("the length=%d\n",count);
    return 0;
}