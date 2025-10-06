#include<stdio.h>
void sum(int val[]);
int main()
{
    int arr[4]={12,14,16,18};
    sum(arr);
    return 0;
}
void sum(int val[])
{
    int p=10,q,r;
    q=val[0]+p;
    r=val[1]+p;


    printf("q=%d\n",q);
    printf("r=%d\n",r);

}