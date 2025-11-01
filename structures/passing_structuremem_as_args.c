#include<stdio.h>
struct stu
{
    char name[10];
    int age;
};
void stfun(char name[10],int age);
int main()
{
    struct stu var1={"prashu",22};
    stfun(var1.name,var1.age);
    return 0;
}
void stfun(char name[10],int age)
{
    printf("%s\n",name);
}
