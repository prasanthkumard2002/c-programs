#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int sl,i,j=0;
    printf("enter string str1:");
    scanf("%s",str1);
    sl=strlen(str1);
    printf("string str1 length=%d\n",sl);
    for(i=sl-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("the str2=%s\n",str2);
    if((strcmp(str1,str2))==0)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }
    return 0;
}