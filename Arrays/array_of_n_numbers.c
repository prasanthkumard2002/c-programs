#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *arr;
    printf("enter n value");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    //read values//

    for(int i=0;i<n;i++)
    {
        printf("enter the %d values:",i);
        scanf("%d",arr+i);
    }
    //print//
    for(int i=0;i<n;i++)
    {
    printf("%d\t",*(arr+i));
    }
    free(arr);
    return 0;
}