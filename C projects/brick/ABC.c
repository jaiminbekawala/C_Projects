#include <stdio.h>

void main()
{
    int i, j, n;
    char  ch = 'A'-1;
    printf("Enter the value for n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c", ch + j);
        }
        printf("\n");
    }
}