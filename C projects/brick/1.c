#include <stdio.h>

void main()
{
    int i, j, k, n;
    printf("Enter the heinght of the Triangle : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(k=1;k <= n-i;k++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf(" ");

        for (int m = 0; m < j - 1; m++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}