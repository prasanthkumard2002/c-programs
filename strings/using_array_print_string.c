#include<stdio.h>
int main()
{
    char strarr[]="prasanth";
    for(int i=0;strarr[i]!='\0';i++)
    {
        printf("%c\t",strarr[i]);
        printf("the address of %d character=%p\n",i+1,&strarr[i]);
    }
    return 0;

}