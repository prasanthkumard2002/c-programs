#include<stdio.h>
int main()
{
    char str1[]="prasanth";
    int count=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    printf("the length=%d\n",count);
}