#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char temp;
    printf("enter a string:");
    scanf("%s",str1);
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    printf("%d\n",i);
    for(int j=0;j<i/2;j++)
    {
        temp=str1[j];
        str1[j]=str1[i-j-1];
        str1[i-j-1]=temp;
    }
    printf("reverse string=%s\n",str1);
    return 0;
}