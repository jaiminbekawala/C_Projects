//WAP to get two float value from user and divide them and print the result along the numbers
#include <stdio.h>

void main()
{
    float n1,n2, result;
    
    //Get values from user
    printf("\n Enter the value for n1 : ");
    scanf("%f", &n1);
    printf("\n Enter the value for n2 : ");
    scanf("%f", &n2);

    //divide values
    result = n1 / n2;

    //print the result with values
    printf("\n Result of %.2f / %.2f = %.2f", n1, n2, result);
}