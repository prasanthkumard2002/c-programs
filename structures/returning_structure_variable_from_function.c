#include<stdio.h>
#include<string.h>
struct stu
{
    char name[20];
    int age;
    int roll;
};
struct stu strfun(struct stu var2);
struct stu strvar={"name",22,33};
int main()
{
    struct stu p;
    p=strfun(strvar);
    printf("change=%d\n",p.age);
    return 0;
}
struct stu strfun(struct stu var2)
{
    var2.age=var2.age+20;
    return var2;
}