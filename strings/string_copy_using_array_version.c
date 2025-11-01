#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    int i=0,j=0;
    printf("enter first string:");
    scanf("%s",str1);
    while(str1[i]!='\0')
    {
        str2[j]=str1[i];
        i++;
        j++;
    }
    str2[j]='\0';
    printf("the second string=%s",str2);
    return 0;
}