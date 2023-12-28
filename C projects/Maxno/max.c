#include <stdio.h>

void main()
{
    double n1,n2,n3;
    printf("\nEnter the value of n1 : ");
    scanf("%lf", &n1);
    printf("\nEnter the value of n2 : ");
    scanf("%lf", &n2);
    printf("\nEnter the value of n3 : ");
    scanf("%lf", &n3);

    if (n1 >= n2 )
    {
        if (n1 >= n3)
            printf("%.2lf is the Maximum number.", n1);
        else
            printf("%.2lf is the Maximun number.", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("%.2lf is the Maximum number.", n2);
        else
            printf("%.2lf is the Maximum number.", n3);
    }
}

