/* Write a program that asks you to enter an ASCII code value, such as 66, 
 * and then prints the character having that ASCII code.
 *
 * exercise3-2.c
 *
 */

#include <stdio.h>

int main(void)
{
    char asciiNumber;

    printf("Enter ASCII code value: ");
    scanf("%d", &asciiNumber);

    printf("The character having ASCII code %d is %c.\n", 
            asciiNumber, asciiNumber);

    return 0;
}
