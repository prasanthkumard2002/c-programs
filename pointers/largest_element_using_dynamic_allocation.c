#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int num,i,large;
    printf("enter number of elements u want be stored in arry:");
    scanf("%d",&num);
    ptr=(int *)malloc(num*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated...\n");
        return 1;
    }
    else
    {
        printf("memory allocated sucessfully..now u push the elements\n");
    }
    for(i=0;i<num;i++)
    {
        printf("push %d element",i+1);
        scanf("%d",ptr+i);
    }
    printf("the stored arry elements are...\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    large=*ptr;
    for(i=1;i<num;i++)
    {
        if(*(ptr+i)>large)
        {
            printf("large=%d\n",*(ptr+i));
        }
    }
    

}