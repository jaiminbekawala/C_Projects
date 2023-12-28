// WAP to get output of a multiplication table
#include <stdio.h>

void main()
{
    float multi;
    for (int i = 1; i <=10; i++)
    {
        multi = 5 * i;
        printf("\n 5 x %d = %.2f", i, multi);
    }
}