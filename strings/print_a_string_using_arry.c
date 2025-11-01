#include<stdio.h>
int main()
{
    char str1[10];
    printf("enter the string");
    scanf("%s",str1);
    int i=0;
    while(str1[i]!='\0')
    {
        printf("%c",str1[i]);
        i++;
    }
    return 0;
}