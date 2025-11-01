#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int l,i,j=0;
    printf("enter the str1:");
    scanf("%s",str1);
    l=strlen(str1);
    printf("length=%d\n",l);
    for(i=l-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("str2=%s\n",str2);
    if(strcmp(str1,str2)==0)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not a palindrome\n");
    }
    return 0;
    
}