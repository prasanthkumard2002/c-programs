#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter the string");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("entered name is");
    puts(name);
    printf("length of the string=%d",strlen(name));
    return 0;
}