#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    printf("enter first string");
    scanf("%s",str1);
    strcpy(str2,str1);
    printf("first string=%s\n",str1);
    printf("second string=%s\n",str2);
    return 0;
}