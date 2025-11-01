#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i,num1;
    printf("enter initial bytes u want:");
    scanf("%d",&num);
    int *ptr1;
    int *ptr2;
    ptr1=(int *)malloc(num*sizeof(int));
    if(ptr1==NULL)
    {
        printf("memory is not allocated...\n");
        return 1;
    }
    else
    {
        printf("memory allocated sucessfully...\n");
    }
    for(i=0;i<num;i++)
    {
        printf("push the %d element..",i+1);
        scanf("%d",ptr1+i);
    }
    printf("the elements are:\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",*(ptr1+i));
    }
    printf("now iam going to increse/decrese the memory\n");
    printf("enter the new bytes:");
    scanf("%d",&num1);
    ptr2=(int *)realloc(ptr1,num1*sizeof(int));
    if(ptr2==NULL)
    {
        printf("reallocation of memory not created...\n");
        return 1;
    }
    else
    {
        printf("reallocation of memory sucessfully created\n");
    }
    for(i=0;i<num1;i++)
    {
        printf("again enter %d elements:",i+1);
        scanf("%d",ptr2+i);
    }
    printf("after reallocation the elements are...\n");
    for(i=0;i<num1;i++)
    {
        printf("%d\t",*(ptr2+i));
    }
    free(ptr2);

}