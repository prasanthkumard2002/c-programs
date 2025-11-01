#include<stdio.h>
int main()
{
   int num,fact=0;
   printf("enter the number:");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
    if(num%i==0)
    {
        printf("%d\n",i);
        fact++;
    }
   }
   printf("the factors=%d\n",fact);
   if(fact<=2)
   {
    printf("it is prime");
   }
   else
   {
    printf("it is not prime");
   }
   return 0;
}