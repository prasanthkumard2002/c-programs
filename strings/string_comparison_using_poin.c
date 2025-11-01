#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    printf("enter first string:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    char *ptr1=str1;
    char *ptr2=str2;
    while(*ptr1==*ptr2 && *ptr1!='\0' && *ptr2!='\0')
    {
        ptr1++;
        ptr2++;
    }
    if(*ptr1=='\0' && *ptr2=='\0')
    {
        printf("both are same");
    }
    else
    {
        printf("not same");
    }
    return 0;

}