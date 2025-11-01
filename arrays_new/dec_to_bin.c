#include<stdio.h>
int main()
{
    int arr[10];
    int num,rem,i=0;
    int l=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        arr[i]=rem;
        num/=2;
        i++;
    }
    printf("length of arry size=%d\n",i);
    for(int l=i-1;l>=0;l--)
    {
        printf("%d",arr[l]);
    }
    return 0;
}