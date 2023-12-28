#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    long int e;
    short int f;

    printf("Enter value for integer a : ");
    scanf("%d", &a);

    printf("\nEnter value for float b : ");
    scanf("%f", &b);

    printf("\nEnter value for char c : ");
    scanf("%s", &c);

    printf("\nEnter value for double d : ");
    scanf("%lf", &d);

    printf("\nEnter value for long int e : ");
    scanf("%ld", &e);

    printf("\nEnter value for short int f : ");
    scanf("%hi", &f);
    
    printf("\n The int value is %d and size of the int value is %d\n",a,sizeof(a));

    printf("\n The Float value is %f and size of the float value is %d\n",b,sizeof(b));

    printf("\n The Char value is %c and size of the char value is %d\n",c,sizeof(c));

    printf("\n The Double value is %lf and size of the double value is %d\n",d,sizeof(d));

    printf("\n The long int value is %ld and size of the long value is %d\n",e,sizeof(e));

    printf("\n The Short int value is %hi and size of the short value is %d\n",f,sizeof(f));
    return 0;
}