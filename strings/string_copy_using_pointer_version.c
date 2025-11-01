#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="prasanth";
    char str2[10];
    char *ptr1=str1;
    char *ptr2=str2;
    while(*ptr1!='\0')
    {
        *ptr2=*ptr1;
         ptr1++;
         ptr2++;
    }
    *ptr2='\0';
    ptr2=str2;
    while(*ptr2!='\0')
    {
        printf("%c",*ptr2);
        ptr2++;
    }

}