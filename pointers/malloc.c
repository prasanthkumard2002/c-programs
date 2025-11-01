#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i=0;
    printf("enter how much of bytes of memory u want:");
    scanf("%d",&num);
    int *ptr;
    ptr=(int *)malloc(num*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation failed...\n");
        return 1;
    }
    printf("memory allocation sucessfull and their default values are:\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    for(i=0;i<num;i++)
    {
        printf("now u push the %d element to allocated memory:",i+1);
        scanf("%d",ptr+i);
    }
    printf("the allocated elements are\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}