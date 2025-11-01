#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    int n;
    printf("enter a string name:");
    scanf("%s",str1);
    n=strlen(str1);
    printf("length=%d\n",n);
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",str1[i]);
    }

}