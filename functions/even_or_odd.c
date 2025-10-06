#include<stdio.h>
void evenorodd(int c);
int main()
{
    int a;
    printf("plese enter the number");
    scanf("%d",&a);
    evenorodd(a);
    return 0;

}
void evenorodd(int c)
{
    if(c%2==0)
    {
        printf("it is even=%d",c);
    }
    else
    {
        printf("it is odd=%d",c);
    }
}
