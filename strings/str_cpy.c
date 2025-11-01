#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    printf("enter string1:");
    scanf("%s",str1);
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        str2[j]=str1[i];
        i++;
        j++;
    }
    str2[j]='\0';
    printf("the copied string=%s\n",str2);
    for(j=0;str2[j]!='\0';j++)
    {
        printf("%c",str2[j]);
    }
}