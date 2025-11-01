#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,nbytes,i;
    printf("enter the number of bytes:");
    scanf("%d",&nbytes);
    ptr=(int*)malloc(nbytes*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory is not allocated....\n");
        return 1;
    }
    else
    {
        printf("memnory is allocated...sucessfully..\n");
    }
    for(i=0;i<nbytes;i++)
    {
        printf("enter %d element",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("the array elements are:\n");
    for(i=0;i<nbytes;i++)
    {
        printf("%d\t",ptr[i]);
    }
    int small,large;
    large=small=ptr[0];
    for(i=1;i<nbytes;i++)
    {
        if(ptr[i]<small)
        {
            small=ptr[i];
        }
        if(ptr[i]>large)
        {
            large=ptr[i];
        }
    }
    printf("largest value=%d\n",large);
    printf("smallest value=%d\n",small);
    free(ptr);
}