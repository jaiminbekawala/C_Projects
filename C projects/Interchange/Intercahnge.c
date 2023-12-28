#include<stdio.h>

int main()
{
    double a,b,temp;
    printf("Enter value of a :");
    scanf("%lf", &a);
    printf("Enter value of b :");
    scanf("%lf", &b);

    
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Interchanging, \nValue of a : %.2lf ", a);
    printf("\nValue of b : %.2lf", b);
    return 0;

}