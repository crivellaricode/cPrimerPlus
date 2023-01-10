/* bases.c -- prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main(void)
{
    int x = 100;
    int y = 0x64;
    int z = 0144;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x,x);
    printf("dec = %d; octal = %#o;  hex = %#x\n", y, y, y); 
    printf("dec = %d; octal = %#o;  hex = %#x\n", z, z, z); 

    return 0;
} 
