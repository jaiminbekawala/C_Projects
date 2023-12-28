#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i, j, n = 5;
    for(n = 1; n <= 5; n++)
    {
    if(n%2 != 0)
    {
        for(i = 1; i <= n; i++)
        {
            /*for ( j = 1; j <= i; j++)
            {
                printf("%d", i);
            }*/
            printf("%d", i);
            printf("\n");
        }
    }
    }
}