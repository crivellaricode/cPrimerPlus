/* Floating-point Overflow and Underflow */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) 
{
    float myOverFlow = 3.4e38 * 100.0f;
    float myUnderflow = 1.17549e-38;

    printf("FLT_MAX = %g\n", (float) FLT_MAX);
    printf("FLT_MIN = %g\n", (float) FLT_MIN);
    printf("myOverFlow = %e = %f\n", myOverFlow, myOverFlow);
    printf("myUnderflow %e = %.43f\n", myUnderflow, myUnderflow);

    return 0;
}
