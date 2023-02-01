/* exercise3-7.c */

#include <stdio.h>

int main(void)
{
    float heightIn, heightCm;

    printf("Enter your height in inches: ");
    scanf("%f", &heightIn);

    heightCm = heightIn * 2.54;
    printf("Your height in centimeters is %.2f\n", heightCm);
    
    return 0;
}

