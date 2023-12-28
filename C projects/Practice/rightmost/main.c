#include<stdio.h>

void main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);

    int s = num % 10000;
    int t = num % 1000;
    int l = num % 10;

    printf("\n First Line  : %d", num);
    printf("\n Second Line : %d", s);
    printf("\n Third Line  : %d", t);
    printf("\n......");
    printf("\n\n Last line  : %d", l);

}