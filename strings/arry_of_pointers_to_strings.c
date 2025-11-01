#include<stdio.h>
int main()
{
    char *str1[4]={"prashu","kumar","suhasini","madam"};
    for(int i=0;i<4;i++)
    {
        printf("%s\n",*(str1+i));
    }
    printf("size=%d",sizeof(str1[1]));
    return 0;
}