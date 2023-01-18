#include <stdio.h>

int main(void)
{
    char beep = 7;
    char beep2 = '\a';
    char beep3 = '\007';

    printf("beep %c\n", beep);
    getchar();

    printf("beep2 %c\n", beep2);
    getchar();
 
    printf("beep3 %c\n", beep3);
    getchar();

    printf("Gramps sez, \"a \\ is a backslash\"\n");

    return 0;
}
