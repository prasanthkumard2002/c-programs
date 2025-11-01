#include<stdio.h>
struct stu
{
    int age;
    int roll;
};
struct stu *pfun(struct stu *ptr);
int main()
{
    struct stu *q;
    struct stu p={22,33};
    q=pfun(&p);
    printf("%d\n",q->age);
    return 0;
}
struct stu *pfun(struct stu *ptr)
{
    ptr->age=ptr->age+10;
    return ptr;
}