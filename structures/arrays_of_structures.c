#include<stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    struct student stuarr[4];
    for(int i=0;i<4;i++)
    {
        printf("enter name and age:");
        scanf("%s %d",stuarr[i].name,&stuarr[i].age);
    }
    for(int i=0;i<4;i++)
    {
        printf("%s %d\t",stuarr[i].name,stuarr[i].age);
    }
    return 0;
}