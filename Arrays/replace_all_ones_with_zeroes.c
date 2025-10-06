#include<stdio.h>
int main()
{
    int arr[15];
    int num,i=0,rem;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(rem==1)
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
    printf("the length=%d\n",i);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;

}