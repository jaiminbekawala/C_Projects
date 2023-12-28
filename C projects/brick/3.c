#include<stdio.h>

void main()
{
    int i , j = 4, k, x;

    for(i = 1; i <= 4; i++)
    {
        for (k = 1; k <= j; k++)
        {
            printf(" ");
        }
        for ( x = 1; x <= i; x++)
        {
            printf("%d", i);
            printf(" ");
        }
        printf("\n");
        j = j - 1;
    }
}