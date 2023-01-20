#include <stdio.h>
int main(void)
{
    int choice;
    double number;
    _Bool menu = 0;

    while(menu == 0)
    {
        printf("Enter 1 decimal/notation or  2 notation/decimal:  ");
        scanf("%d", &choice);  
        
        if(choice == 1 || choice == 2)
        {   
            if(choice == 1)
            {
                printf("Enter decimal number: ");
                scanf("%lf", &number);
                printf("Decimal %lf in base 10 notation = %e\n", number,
                        number);
            }
            else 
            {
                printf("Enter notation: ");
                scanf("%lf", &number);
                printf("Notation %e in decimal = %lf\n", number, number);
            }
            menu = 1;
        }
        else 
        {
            printf("Invalid input!\n"); 
        }

    }
    
    return 0;
}
