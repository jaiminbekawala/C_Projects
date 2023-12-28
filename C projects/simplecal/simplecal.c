#include<stdio.h>
#include<math.h>
int main()
{
    
    int mod,a,b,sum,difference,multiply,division;
    printf("\nEnter value of a :" );
    scanf("%d",&a);

    printf("\nEnter value of b :" );
    scanf("%d",&b);

    sum=a+b;
    difference=a-b;
    multiply=a*b;
    division=a/b;
    mod=a%b;

    printf("\nsum = %d",sum );
    printf("\ndifference = %d",difference );
    printf("\nmultiply = %d",multiply );
    printf("\ndivision = %d",division );
    printf("\nmod = %d",mod );
}  
