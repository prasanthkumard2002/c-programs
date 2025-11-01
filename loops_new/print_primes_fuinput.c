#include<stdio.h>
int main()
{
    int num,count =0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
        count =0;
    }
}