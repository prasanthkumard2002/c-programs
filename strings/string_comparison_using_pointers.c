#include<stdio.h>
int main()
{
    char str1[]="prasanth";
    char str2[]="prasanth";
    char *ptr1;
    char *ptr2;
    ptr1=str1;
    ptr2=str2;
    //int i=0;//
    while(*ptr1==*ptr2 && *ptr1!='\0' && *ptr2!='\0')
    {
        ptr1++;
        ptr2++;
    }
    if(*ptr1=='\0' && *ptr2=='\0')
    {
        printf("both are equal");
    }
    else
    {
        printf("both are not equal");
    }
}