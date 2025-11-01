#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="prasanth";
    int n=strlen(str1);
    char str2[10];
    for(int i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[n]='\0';
    for(int i=0;str2[i]!='\0';i++)
    
    {
        printf("%c",str2[i]);
    }
}