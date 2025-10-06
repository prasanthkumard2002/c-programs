#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *revarr;
    int temp;
    printf("enter number of array elements");
    scanf("%d",&n);
    revarr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter %d array values ",i);
        scanf("%d",revarr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(revarr+i));
    }

    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp=revarr[i];
        revarr[i]=revarr[j];
        revarr[j]=temp;
    }

    printf("reverse array element:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(revarr+i));
    }
    free(revarr);
    return 0;
}