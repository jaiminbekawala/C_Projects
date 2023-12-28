#include<stdio.h>

void main()
{
    int num, j, i;
    printf("enter the number: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i--)
    {
        for ( j = 1; j <= i; j--)
        {
            printf("%d ", i);
            continue;
        }
        printf("\n");
    }
    
}
