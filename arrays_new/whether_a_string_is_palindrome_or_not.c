#include<stdio.h>
#include<string.h>
int main()
{
    //char str2[10];//
    char str1[10]="abcdcba";
    char str2[10];
    int j=0;
    int n=strlen(str1);
    for(int i=n-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[n]='\0';
    printf("%s\n",str2);
    printf("%s\n",str1);
    if((strcmp(str1,str2))==0)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("not palindrome");
    }

}