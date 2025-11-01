#include<stdio.h>
int main()
{
    int arr[5];
    int even=0,odd=0;
    for(int i=0;i<5;i++)
    {
        printf("enter %d element",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
        if((arr[i]%2)==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n");
    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
    return 0;
}