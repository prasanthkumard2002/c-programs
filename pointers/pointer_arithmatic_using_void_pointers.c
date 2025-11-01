#include<stdio.h>
int main()
{
    int arr1[4]={52,96,75,63};
    void *vpt;
    vpt=arr1;
    for(int i=0;i<4;i++)
    {
        printf("%d\t",*(int*)vpt);
        vpt=(int*)vpt+i;
    }
}