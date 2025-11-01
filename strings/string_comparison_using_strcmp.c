#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    char str2[10];
    printf("enter first str1:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0)
    {
        printf("both are same:");
    }
    else
    {
        printf("both are not same");
    }
    return 0;
}