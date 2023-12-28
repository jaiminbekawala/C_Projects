#include<stdio.h>

void main()
{
    float Km,M,ft,inch,cm;
    int unit;
    printf("Distance Between the Two cites is: ");
    scanf("%f", &Km);
    printf("Enter the Unit to Convert to :");
    scanf("%d", &unit);

    M = Km*1000;
    ft = Km*3280.84;
    inch = Km*39370.1;
    cm = Km*100000;
    printf("\nDistance in Meter  : %f", M);
    printf("\nDistance in Feet  : %f", ft);
    printf("\nDistance in Inches  : %f", inch);
    printf("\nDistance in Centimeter : %f", cm);
}