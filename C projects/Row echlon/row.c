#include <stdio.h>

void main()
{
    int a[3][3], i, j;
    printf("\n Enter the Matrix: \n");
    for ( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrix is: \n");
    // for printing the matrix
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" %d  ", a[i][j]);
        }
        printf("\n");
    }
    //For leading one
    if (a{i} != 1 || a{j} != 1)
        printf("\nyess\n");
}