#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i;
    printf("enter how much of bytes u want:");
    scanf("%d",&num);
    int *ptr;
    ptr=(int *)calloc(num,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory is not allocated..\n");
        return 1;
    }
    printf("memory is aloocated sucessfully..their default values are\n");
    for(int i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("now push the elements into that memory\n");
    for(i=0;i<num;i++)
    {
        printf("the %d element is:",i+1);
        scanf("%d",ptr+i);
    }
    printf("now retrive the elements...\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}