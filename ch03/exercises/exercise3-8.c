/* exercise3-8.c */

#include <stdio.h>

int main(void)
{
    float pints, cups, ounces, tablespoons, teaspoons;
    
    printf("Please enter how many cups to convert: ");
    scanf("%f", &cups);

    pints = cups / 2;
    ounces = cups * 8;               
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;

    printf("- %.2f cups represent: \n\t", cups);
    printf("- %.2f pints.\n\t", pints);
    printf("- %.2f ounces.\n\t", ounces);
    printf("- %.2f tablespoons.\n\t", tablespoons);
    printf("- %.2f teaspoons.\n", teaspoons);
    
    return 0;
}
