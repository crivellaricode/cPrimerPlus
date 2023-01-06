// ex3.c

#include <stdio.h>

int main(void) 
{
    int myAge, days;

    myAge = 56;
    days = myAge * 365;

    printf("I have %d years old, ", myAge);
    printf("which are approximately %d days.\n",days);

    return 0;
}
