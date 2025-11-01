#include<stdio.h>
int main()
{
    char str1[]="mallesh";
    char str2[]="mallesh";
    int i=0;
    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        printf("both are equal");
    }
    else
    {
        printf("both are not equal");
    }
}