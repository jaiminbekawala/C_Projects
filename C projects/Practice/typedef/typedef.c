//WAP to illustrate the use of typedef dclaration in a program
#include <stdio.h>

void main()
{
    typedef float add;
    add x,y,z;
    printf("Enter the values of x: ");
    scanf("%f", &x);
    printf("Enter the values of y: ");
    scanf("%f", &y);

    z = x + y;

    printf("The sum is : %f", z);

}