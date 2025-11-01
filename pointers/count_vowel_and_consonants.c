#include<stdio.h>
int main()
{
    char str1[10];
    int vowel_count=0,constant_count=0;
    printf("enter a string:");
    scanf("%s",str1);
    char *ptr=str1;
    while(*ptr!='\0')
    {
        if(*ptr =='a' || *ptr == 'A' || *ptr== 'E' || *ptr== 'e' || *ptr== 'I'|| *ptr== 'i' || *ptr == 'o' || *ptr == 'O' || *ptr == 'U' || *ptr == 'u')
        {
            vowel_count++;
        }
        else
        {
            constant_count++;
        }
        ptr++;
    }
    printf("the total vowels are=%d\n",vowel_count);
    printf("total constants count=%d\n",constant_count);
    return 0;
}