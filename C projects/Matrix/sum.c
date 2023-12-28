#include<stdio.h>

void main()
{
    int a[3][3], i, j;
    int b[3][3], c[3][3];
    printf("Enter the values of Matrix 1: \n");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }   
    }
    printf("Enter the value of Matrix 2: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }     
    }

    printf("The Additon of the Matrix is: \n");
    for ( i = 0; i < 3; i++)
    {
        for(j =0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }       
}