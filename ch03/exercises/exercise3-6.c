/* exercise3-6.c */

#include <stdio.h>

int main(void)
{
    float amountQuarter, totalMolecule;
    float moleculeGrams = 3.0e-23f;
    float quartGrams = 950.0f;

    printf("Please enter a  amount of water in quarts: ");
    scanf("%f", &amountQuarter);
    
    totalMolecule = (amountQuarter * quartGrams) / moleculeGrams;
    printf("The number of water molecules in %f quarts is %e molecules.\n",
            amountQuarter, totalMolecule);

    return 0;    
}
