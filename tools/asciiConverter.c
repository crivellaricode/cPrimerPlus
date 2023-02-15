#include <stdio.h>

int main(void)
{
    int num, choice;
    char letter;

    printf("Type 1 to convert integer/ASCII or 2 to ASCII/integer: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Enter a integer number: ");
        scanf("%d", &num);
        printf("%d in ASCII is %c\n", num, num);
    } 
    else if (choice == 2)
    {
        printf("Enter a Letter: ");
        scanf(" %c", &letter);
        printf("%c ASCII is %d\n", letter, letter);
    }
    else
        printf("\nInvalid choice! Type 1 or 2\n\n");

    return 0;
}
