#include <stdio.h>
#include <math.h>

int main() {
    int binaryNum, decimalNum = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }

    printf("Decimal number: %d\n", decimalNum);
    return 0;
}

