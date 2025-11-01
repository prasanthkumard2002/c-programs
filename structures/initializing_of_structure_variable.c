#include<stdio.h>
#include<string.h>
struct stu
{
    char name[10];
    int age;
}var1={"prashu",22};
struct stu var2;
int main()
{
    struct stu var3,var4;
    strcpy(var2.name,"kkk");
    var2.age=21;
    printf("enter the name and age:");
    scanf("%s %d",var3.name,&var3.age);
    var4=var3;
    printf("name=%s and his age=%d\n",var1.name,var1.age);
    printf("name=%s and his age=%d\n",var2.name,var2.age);
    printf("name=%s and his age=%d\n",var3.name,var3.age);
    printf("name=%s and his age=%d\n",var4.name,var4.age);
    return 0;
}