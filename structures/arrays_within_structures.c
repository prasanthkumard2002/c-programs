#include<stdio.h>
struct stu
{
    int name[10];
    int age;
    int submarks[3];
};
int main()
{
    int i,j;
    struct stu arr[3];
    for(i=0;i<3;i++)
    {
        printf("enter the name and age:");
        scanf("%s %d",arr[i].name,&arr[i].age);
        for(j=0;j<3;j++)
        {
            printf("enter each student marks:");
            scanf("%d",&arr[i].submarks[j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("name=%s age=%d\n",arr[i].name,arr[i].age);
        for(j=0;j<3;j++)
        {
            printf("submarks are=%d\t",arr[i].submarks[j]);
        }
    }
    return 0;
}