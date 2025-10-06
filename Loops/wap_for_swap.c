#include<stdio.h>
int main()
{
    int a=20,b=30;
    int temp;
    printf("before swapping values are a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping values are a=%d b=%d\n",a,b);
    return 0;
    
}