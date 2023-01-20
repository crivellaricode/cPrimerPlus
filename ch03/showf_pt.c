/* showf_pt.c -- dispalys float value in two ways */

#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;      /* 32000.000000        */
    double abet = 2.14e9;       /* 2140000000.000000   */
    long double dip = 5.32e-5;  /* 0.0000532         */

    printf("%f can be written %e\n", aboat, aboat);
    /* next line requires c99 or later compliance */
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}
