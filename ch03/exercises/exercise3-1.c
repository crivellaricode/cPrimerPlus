/* Programming exercise chapter 3
 * exercise3.1
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int myIntMax = 2147483647;
    int myIntMin = -2147483648;
    float myFloatMax = 3.402823e+38f;
    float myFloatMin = 1.175494e-38f;

    /* int */
    printf("Maximum int value on this system = %d\n", INT_MAX);
    printf("Minimum int value on this system = %d\n", INT_MIN);
    printf("int overflow myIntMax + 1 = %d\n", myIntMax + 1);
    printf("int undeflow myIntMin - 1 = %d\n", myIntMin - 1);

    /* float */
    printf("Maximum float value on this system = %e\n", FLT_MAX);
    printf("Minimum float value on this system = %e\n", FLT_MIN);
    printf("Floating-point overflow: %e * 10 = %e\n", FLT_MAX, FLT_MAX * 10);
    printf("Floating-point underflow: %e / 10 = %e\n", FLT_MIN, FLT_MIN / 10);

    return 0;
}
