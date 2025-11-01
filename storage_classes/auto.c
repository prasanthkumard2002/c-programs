#include<stdio.h>
void aut(register int z);
int main()
{
    auto int a=5;
    aut(a);
    return 0;
}
void aut(int z)
{
    printf("in function def auto value=%d\n",z);
}
