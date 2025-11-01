#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ptr;
    int i,j;
    int rows,cols;
    printf("enter rows:");
    scanf("%d",&rows);
    printf("enter columns:");
    scanf("%d",&cols);
    ptr=(int**)malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++)
    {
    ptr[i]=(int *)malloc(cols*sizeof(int));
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("enter [%d][%d] element:",i,j);
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("2d array elements are:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",ptr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) 
    {
    free(ptr[i]);
    }
    free(ptr);

}