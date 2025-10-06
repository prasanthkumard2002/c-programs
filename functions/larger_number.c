#include<stdio.h>
int big(int a,int b);
int main()
{
    int c=12,d=13;
    printf("larger number=%d\n",big(12,13));
    return 0;

}
int big(int a,int b)
{
   return a>b?a:b;
}