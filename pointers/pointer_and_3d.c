#include<stdio.h>
int main()
{
    int arr1[2][3][4]={{{1,2,3,4},{5,6,7,8},{78,89,65,54}},{{12,24,56,13},{84,96,74,26},{12,36,45,78}}};
    int (*ptr)[3][4];
    ptr=arr1;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {
                printf("%d\t",*(*(*(ptr+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
}