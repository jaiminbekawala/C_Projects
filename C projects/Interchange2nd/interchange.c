#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter num1 :" );
    scanf("%d",&num1);

    printf("Enter num2 :" );
    scanf("%d",&num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("num1 is %d and num2 is %d",num1,num2 );
}  
