#include<stdio.h>
struct stu
{
    int age;
    int roll;
};
void stufun(struct stu *ptr);
int main()
{
    struct stu var1={22,33};
    stufun(&var1);
    return 0;
}
void stufun(struct stu *ptr)
{
    printf("age=%d\n",ptr->age);
    printf("roll=%d\n",ptr->roll);
}