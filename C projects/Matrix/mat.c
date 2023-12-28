// WAP to store and print the value of 3*3 Matrix
#include<stdio.h>

void main()
{
    int a[3][3], i, j;
    printf("Enter the value of matrix: \n");
    for(i = 0; i < 3; i++ )
    {
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
       printf("\n"); 
    }    
}