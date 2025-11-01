#include<stdio.h>
int main()
{
    char str1[]="prasanth";
    int i=0,n=0;
    while(str1[i]!='\0')
    {
        printf("%c\n",str1[i]);
        i++;
        n++;
    }
    printf("string length=%d",n);
}