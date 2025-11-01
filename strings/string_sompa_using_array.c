#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    printf("enter first str1:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    int i=0;
    while(str1[i]==str2[i] && str1[i]!='\0'&& str2[i]!='\0')
    {
        i++;
    }
    if(str1[i]=='\0'&&str2[i]=='\0')
    {
        printf("both are same");
    }
    else
    {
        printf("not same");
    }
    return 0;
}