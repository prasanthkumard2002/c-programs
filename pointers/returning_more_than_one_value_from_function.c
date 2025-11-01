#include<stdio.h>
void funrtn(int x,int y,int *psum,int *pdiff,int *pmul);
int main()
{
    int a=10,b=20;
    int sum,diff,mul;
    funrtn(a,b,&sum,&diff,&mul);
    printf("sum=%d diff=%d mul=%d \n",sum,diff,mul);
    return 0;
}
void funrtn(int x,int y,int *psum,int *pdiff,int *pmul)
{
    *psum=x+y;
    *pdiff=x-y;
    *pmul=x*y;
}
