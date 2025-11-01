#include<stdio.h>
void displaybits(int x);
int main()
{
    int a=10,b=12;
    displaybits(a);
    printf("a=%d\n",a);
    displaybits(b);
    printf("b=%d\n",b);
    displaybits(a&b);
    printf("a&b=%d\n",a&b);
    displaybits(a|b);
    printf("a|b=%d\n",a|b);
    displaybits(~a);
    printf("~a=%d\n",~a);
    displaybits(~b);
    printf("~b=%d\n",~b);
    displaybits(a<<2);
    printf("a<<2=%d\n",(a<<2));
    displaybits(a<<6);
    printf("a<<6=%d\n",(a<<6));
    displaybits(a>>2);
    printf("a>>2=%d\n",(a>>2));
    //set a 2th bit on a//
    displaybits(a|0x04);
    printf("set=%d\n",(a|0x04));
    //clear a bit on b//
    displaybits(b&~(0x04));
    printf("clear a bit on b=%d\n",(b&~(0x04)));
    //toggle a bit//
    displaybits(a^0x01);
    printf("toggle a of 1st bit=%d\n",(a^0x01));
    displaybits(a^0x01^0x01);
    printf("again toggle=%d\n",(a^0x01^0x01));
    //toggle a bit//
    displaybits(a&0x08);
    printf("test 4th bit of 1st byte=%d\n",(a&0x08));
    //set all bits of 0th byte//
    displaybits(a|0xff);
    printf("set all bits of 1st byte=%d\n",(a|0xff));
    displaybits(a|0xffff);
    printf("set all bits of 1st and 2nd byte=%d\n",(a|0xffff));
    a=a|0xffff;
    displaybits(a|0xffff);
    printf("now a=%d\n",a);
    //clear all bits of 1st and 2nd bytes of a//
    displaybits(a&~(0xffff));
    printf(" after clearing of all bits of 1st and 2nd=%d\n",(a&~(0xffff)));

    return 0;
}
void displaybits(int x)
{
    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if((mask&x)==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        if((i%8)==0)
        {
            printf(" ");
        }
    }

}