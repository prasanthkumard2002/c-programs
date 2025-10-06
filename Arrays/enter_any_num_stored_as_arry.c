#include<stdio.h>
int main()
{
    int arr[10];
    int num,original,sum=0,count=0,rem,temp;
    printf("enter the number");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("the number of digits=%d\n",count);
    printf("original=%d\n",original);
    temp=count;
    printf("temp value=%d\n",temp);
    while(original!=0)
    {
        rem=original%10;
        arr[count-1]=rem;
        original/=10;
        count--;
    }
    for(int i=0;i<temp;i++)
    {
        printf("arr[%d]=%d\t\n",i+1,arr[i]);
        //sum=sum+arr[i]*2;//
    }
    //printf("sum or decimal value=%d\n",sum);//

}