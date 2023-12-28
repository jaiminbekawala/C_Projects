#include<stdio.h>

void main()
{
    int n, sum = 0, m;
    printf("Enter the Interger value: ");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n%10;
        sum += m; 
        n = n/10;  
    }
    printf("The Sum of the digits of the Integer is : %d\n", sum);
}