/* exercise3-5.c */

#include <stdio.h>

int main(void)
{   
    int age;
    int ageSeconds = 3.156e7;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age in seconds is %d seconds.\n", age * ageSeconds);
    
    return 0;
}
