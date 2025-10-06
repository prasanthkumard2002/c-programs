#include<stdio.h>
int add(void);
int main()
{
    int a=10,b=20;
    //add();//
    printf("%d\n",add());
    return 0;

}
int add(void)
{
    int d=2,e=4,sum=d+e;
    printf("%d\n",sum);
    return sum;
}