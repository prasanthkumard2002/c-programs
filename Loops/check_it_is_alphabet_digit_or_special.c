#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
    {
        printf("it is a character=%c",ch);
    }
    else if(ch>=0)
    {
        printf("it is digit");
    }
    else
    {
            printf("it is a special symbol");
    }

    return 0;
}