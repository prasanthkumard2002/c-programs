#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float *avgmarks;
    float sum=0;
    printf("enter number of students marks");
    scanf("%d",&n);
    avgmarks=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++)
    {
        printf("enter %d marks:",i);
        scanf("%f",avgmarks+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%f\t",*(avgmarks+i));
        sum=sum+*(avgmarks+i);
    }
    printf("average:%f",(float)sum/n);
    free(avgmarks);
    return 0;
}