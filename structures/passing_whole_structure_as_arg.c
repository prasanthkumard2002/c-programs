#include<stdio.h>
struct stu
{
    int age;
    int roll;
};
void stfun(struct stu var1);
int main()
{
    struct stu student={22,24};
    stfun(student);
    return 0;
}
void stfun(struct stu var1)
{
    printf("%d\n",var1.age);
    printf("%d\n",var1.roll);
}