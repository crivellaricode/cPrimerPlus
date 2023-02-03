#include <stdio.h>
#include <string.h>
#define NAME "Tuffy"
int main(void)
{

    printf("\n==================================\n");
    printf("char sizeof  = %zd bytes = %zd bits\n", sizeof(char),
            sizeof(char) * 8);
    printf("int sizeof  = %zd bytes = %zd bits\n", sizeof(int),
            sizeof(int) * 8);
    printf("float sizeof  = %zd bytes = %zd bits\n", sizeof(float),
            sizeof(float) * 8);
    printf("double sizeof  = %zd bytes = %zd bits\n", sizeof(double),
            sizeof(double) * 8);
    printf("\n==================================\n");
    printf("6.28 sizeof  = %zd\n", sizeof 6.28);
    printf("6.28f sizeof  = %zd\n", sizeof 6.28f);
    printf("==================================\n");

    printf("%s\nLetters = %zd\nMemory use = %zd.\n", NAME, strlen(NAME),
            sizeof NAME);
    printf("==================================\n");

    return 0;
}
