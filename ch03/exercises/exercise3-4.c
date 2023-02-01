/* exercise3-4.c */

#include <stdio.h>

int main(void)
{
    float myFloat;

    printf("Enter a floating-point value: ");
    scanf("%f", &myFloat);
    printf("fixed-point notation: %f\n", myFloat);
    printf("exponential notation: %e\n", myFloat);
    printf("p notation: %a\n", myFloat);
    
    return 0;
}
