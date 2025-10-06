#include<stdio.h>
int main()
{
    int arr[10];
    int num,rem;
    printf("enter the number:");
    scanf("%d",&num);
    int i=0;
    while(num!=0)
    {
        rem=num%10;
        if(rem==5)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=rem;
        }
        num=num/10;
        i++;
    }
    printf("%d\n",i);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}