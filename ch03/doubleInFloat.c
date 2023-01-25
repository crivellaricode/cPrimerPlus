#include <stdio.h>

int main () 
{
    int cost = 12.99;                  /* initializing an int to a double */
    float floatPi = 3.1415926536;      /* initializing a float to a double */    
    double doublePi = 3.1415926536;    
    
    printf("%d\n", cost);
    printf("%.10f\n", doublePi);
    printf("%.10f\n", floatPi);
    return(0);
}
