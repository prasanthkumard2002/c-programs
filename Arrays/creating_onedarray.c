#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptrarr;
    int n;
    printf("enter no.of bytes");
    scanf("%d",&n);
    ptrarr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter %d element",i);
        scanf("%d",ptrarr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptrarr+i));
    }
    free(ptrarr);
    return 0;
}