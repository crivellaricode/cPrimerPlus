#include <stdio.h>
#include <stdlib.h>

char *int_to_binary(int num) {
    char *binary = (char*) malloc(33 * sizeof(char));
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2 + '0';
        num /= 2;
        ++i;
    }
    binary[i] = '\0';
    int len = i;
    for (i = 0; i < len/2; ++i) {
        char temp = binary[i];
        binary[i] = binary[len-i-1];
        binary[len-i-1] = temp;
    }
    return binary;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    char *binary = int_to_binary(num);
    printf("Binary: %s\n", binary);
    free(binary);
    return 0;
}
