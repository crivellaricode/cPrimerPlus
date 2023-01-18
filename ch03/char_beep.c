#include <stdio.h>

int main(void)
{
    char beep = 7;
    char beep2 = '\a';
    char beep3 = '\007';
    char beep4 = '\7';

    printf("beep %c\n", beep);
    getchar();

    printf("beep2 %c\n", beep2);
    getchar();
 
    printf("beep3 %c\n", beep3);
    getchar();

    printf("beep4 %c\n", beep4);
    getchar();

    return 0;
}
