#include<stdio.h>
#include<conio.h>
void main()
{
    float n1,n2,result;
    int op;
    printf("***Calculator***");
    printf("\n Enter 1st number :");
    scanf("%f", &n1);
    printf("\n Enter The operator :");
    scanf("%d", &op);
    printf("\n Enter 2nd number :");
    scanf("%f", &n2);
    switch (op)
    {
    case 1: 
        result = n1 + n2;
        printf("Addition :%f", result);
        break;
    case 2:
        result = n1 - n2;
        printf("Subtraction : %f", n1-n2);
        break;
    case 3:
        result = n1 * n2;
        printf("Multiplication : %f", n1*n2);
        break;
    case 4:
        result = n1 / n2;
        printf("Division : %f", n1/n2);
        break;

    default:printf("Choose proper operator");
        break;
    }
}


