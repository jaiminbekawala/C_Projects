#include<stdio.h>

void main()
{
    int n, i , s = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            if (i == n)
                printf("%d", i);
            else
                printf("%d + ", i); 
            s = s + i;
        }
    }
    printf("\nSum of the odd no is: %d\n", s);   
}
