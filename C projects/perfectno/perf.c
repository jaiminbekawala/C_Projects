#include<stdio.h>

void main()
{
    int r,n,sum = 0,mul = 1;
    printf("Enter Value of n: ");
    scanf("%d", &n);
    while (n != 10)
    {
        r = n % 10;
        sum = sum + n;
        mul = mul * n;
        n = n / 10; 
    }
    if(sum == mul)
    {
        printf("The number entered is not a perfect no");
    }
    else
    {
        printf("n is a Perfect number");
    }
}