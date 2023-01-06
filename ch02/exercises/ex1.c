#include <stdio.h>
int main(void) 
{
    char firstName[] = "Sidney";
    char lastName[] = "Crivellari";

    printf("%s %s\n", firstName, lastName);
    printf("%s\n%s\n", firstName, lastName);
    printf("%s", firstName);
    printf(" %s\n", lastName);

    return 0;
}
