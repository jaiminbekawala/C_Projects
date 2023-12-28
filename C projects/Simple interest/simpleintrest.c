#include<stdio.h>
#include<stdlib.h>

void main()
{
    float i,p,r,n;

    printf("\n Enter Value of principal :");
    scanf("%f", &p);

    printf("\n Enter value of rate :");
    scanf("%f", &r);

    printf("\n Enter value of no. of years :");
    scanf("%f", &n);
    
    i = ((p*r*n)/100);

    printf("\n Answer i = %f", i);
}