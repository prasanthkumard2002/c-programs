#include<stdio.h>
int main()
{
    int arr[6]={11,22,44,55,88,99};
    int large,small;
    large=small=arr[0];
    for(int i=1;i<6;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("large=%d\n",large);
    printf("small=%d\n",small);
}