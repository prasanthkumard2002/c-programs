#include<stdio.h>
int main()
{
    int arr1[3][4]={{12,89,56,74},{22,45,63,87},{99,88,55,22}};
    int (*ptr)[4];
    ptr=arr1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}