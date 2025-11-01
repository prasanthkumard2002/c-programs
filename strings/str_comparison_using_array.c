#include<stdio.h>
#define size 10
int main()
{
    char str1[size]="mallesh";
    char str2[size]="MALLESH";
    int i;
    for(i=0;i<size;i++)
    {
        if(str1[i]==str2[i])
        {
            if((str1[i]=='\0')&&(str2[i]!='\0'))
            {
                printf("Both strings are not same...\n");
                break;
            }
            else if ((str1[i]=='\0')&&(str2[i]=='\0'))
            {
                printf("Both strings are same....\n");
                break;
            }
        }
        else
        {
            printf("both strings are not same.....\n");
            break;
        }
    }
    return 0;
}