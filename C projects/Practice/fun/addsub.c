//WAP for add and sub ussing function add() and sub()
#include <stdio.h>
// function declaration
int add(int n1, int n2);
int sub(int n1, int n2);

//Main
void main()
{
    int plus, minus;
    int a = 20;
    int b = 10;

    /* calling function */
    plus = add(a,b);
    minus = sub(a,b);
    
    printf("\n 20 + 10 = %d", plus);
    printf("\n 20 - 10 = %d", minus);
}

//ADD
int add(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
}

//Sub
int sub(int n1, int n2)
{
    int diff;
    diff = n1 - n2;
}