#include<stdio.h>
#include<math.h>
int main()
{
    int arr[10];
    int num,count=0,rem,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    int original=num;
    int temp=count;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("the total count=%d\n",count);
    printf("%d",original);
    while(original!=0)
    {
        rem=original%10;
        arr[count-1]=rem;
        original=original/10;
        count--;
    }
    for(int i=0;i<temp;i++)
    {
        printf("the array %d element=%d\n",i+1,arr[i]);
        
    }
}