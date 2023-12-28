//WAP read float num and then print the right most digit.
//Modify it to print last two digits of the number

#include<stdio.h>

void main()
{
    int num, l;
    printf("Enter the Number: ");
    scanf("%d", &num);
    l = num % 100;
    printf("The right most number is: %d", l);
    
}