/* convert kilograms to pounds */
#include <stdio.h>
int main(void)
{
    float kilogram;           /* weight in kilograms  */
    float pounds;

    printf("Please enter weight in kg: ");
    scanf("%f", &kilogram);
    
    pounds = kilogram * 2.20462;
    printf("%.4f kg = %.4f lbs.\n", kilogram, pounds);
    
    return 0;
}
