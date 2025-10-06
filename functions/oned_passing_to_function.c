#include<stdio.h>
void sum(int n);
int main()
{
    int arr[4]={12,14,16,18};
    sum(arr);
    return 0;
}
void sum(int n)
{
    int p=10,q;
    q=n+p;
    printf("q=%d\n",q);
}