/* ASCII control characters 0 to 31
 * Printable ASCII table 32 to 127 */

#include <stdio.h>

int main(void)
{
    int i;
    char asciiChar;

    for( i = 32; i <= 127; i++){
        asciiChar = i;
        printf("%d = %c\n", i, asciiChar);
    }
    return 0;
}
