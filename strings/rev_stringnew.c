#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int length;
    printf("enter the string name:");
    scanf("%s",str);
    length=strlen(str);
    printf("length of string=%d\n",length);
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}