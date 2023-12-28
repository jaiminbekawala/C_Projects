#include<stdio.h>

void main()
{
    int n, counter = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n=n/10;
        counter++;
    }
    printf("The no of digits in the no is: %d", counter);
}