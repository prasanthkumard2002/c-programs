#include<stdio.h>
int main()
{
    int arr[10];
    int num,rem,i=0;
    int j;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        arr[i]=rem;
        num=num/2;
        i++;
    }
    printf("the length=%d\n",i);
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }

}