#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10],i=0,n=0,temp[10],j=0;
    printf("enter a name:\n");
    scanf("%s",str1);
    while(str1[i]!='\0')
    {
        n++;
        temp[j]=str1[i];
        j++;
        i++;
    }
    for(j=0;j<=n;j++)
    {
        printf("%c",temp[j]);
    }
    printf("\n");
    printf("revere of a name:\n");
    for(j=n;j>=0;j--)
    {
        printf("%c",temp[j]);
    }
}