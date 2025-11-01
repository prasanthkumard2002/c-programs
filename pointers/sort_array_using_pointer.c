#include<stdio.h>
int main()
{
    int arr[]={99,56,23,45,16};
    int *ptr;
    ptr=arr;
    int i,j,n=5,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    printf("after sorting using pointers:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}