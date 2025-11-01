#include<stdio.h>
int swap(int *const p,int *const q,int *const r);
int main()
{
    int a=10,b=20,c=30;
    swap(&a,&b,&c);
    printf("a=%d b=%d c=%d\t",a,b,c);


}
int swap(int *const p,int *const q,int *const r)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=*r;
    *r=temp;
}