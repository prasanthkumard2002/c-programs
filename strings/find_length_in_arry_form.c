#include<stdio.h>
int main()
{
    char strname[]="prasanth";
    int i;
    int count=0;
    for(i=0;strname[i]!='\0';i++)
    {
        printf("%c\n",strname[i]);
        count=count+1;
    }
    printf("the length of string=%d\n",i);
    printf("the length of string=%d",count);

}