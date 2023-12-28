#include <stdio.h>

void main()
{
    float price, r, s;
    //Get the Prices
    printf("One Kg of Rice costs: ");
    scanf("%f", &r);
    printf("One Kg of Sugar costs: ");
    scanf("%f", &s);
    //Print prices
    printf("\n***LIST OF ITEMS***\n");
    printf("Items   Price\n");
    printf("Rice    Rs%.2f\n", r);
    printf("Sugar   Rs%.2f\n", s);
}