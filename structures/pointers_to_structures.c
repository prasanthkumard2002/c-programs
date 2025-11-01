#include<stdio.h>
struct stu
{
    char name[10];
    int age;
};
int main()
{
    struct stu var1={"prasanth",22};
    struct stu *ptr;
    ptr=&var1;
    printf("%d\n",ptr->age);
    printf("%s\n",ptr->name);
    printf("%d\n",(*ptr).age);
    return 0;
}