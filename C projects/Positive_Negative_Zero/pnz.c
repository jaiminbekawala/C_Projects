#include<stdio.h>

void main()
{
    int num;
    printf("\n Enter the no. : ");
    scanf("%d", &num);

    if(num > 0)
        printf("\n %d is Positive", num);
    else if(num < 0)
        printf("\n %d is Negative", num);
    else
        printf("\n Number is Zero");
}