#include<stdio.h>
int main()
{
    char name[]="prasanth";
    char *ptr=name;
    int count=0;
    for(int i=0;*ptr!='\0';ptr++)
    {
        printf("%c\t",*ptr);
        printf("%p\n",ptr);
        count++;
    }
    printf("the length=%d\n",count);
    return 0;
}