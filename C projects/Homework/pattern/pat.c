#include<stdio.h>

void main()
{
    int i, j, n;
    int  ch = '1';
    for(i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}