#include<stdio.h>
#include<stdint.h>
int main()
{
    uint32_t value=0x12456738;
    uint8_t *ptr;
    ptr=(uint8_t*)&value;
    if(*ptr==12)
    {
        printf("it is big endian\n");
    }
    else
    {
        printf("little endian\n");
    }
    printf("the address=%p\n",ptr);
    return 0;

}