#include<stdio.h>
#include<math.h>

void main()
{
    float f,c;

    printf("\n Enter the Centigrade Temprature = ");
    scanf("%f", &c);
    
    f = (1.8*c)+ 32;

    printf("\n The Value of Tmeprature in Fahrenheit : %.3f\n", f);

    printf("\n Enter the Fahrenheit temprature = ");
    scanf("%f", &f);
    
    c = ((f - 32) / 1.8); 

    printf("\n The Value of Temprature in Celsius : %.3f", c);
}