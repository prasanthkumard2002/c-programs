#include<stdio.h>
int main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')
    {
        printf("it is a character=%c",ch);
    }
    else
    printf("it is not a character");

    return 0;
}