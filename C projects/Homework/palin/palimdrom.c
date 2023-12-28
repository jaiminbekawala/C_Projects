#include<stdio.h>

void main()
{
    int no, n, rev=0,r;
    printf("Enter the Number: ");
    scanf("%d", &no);
    n = no;
    while(no != 0)
    {
        r = no%10;
        rev = rev * 10+r;
        no = no/10;
    }
    if (rev == n)
    {
        printf("\n%d is a Palindrom no", rev);
    }
    else
    {
        printf("\n%d is not a Palindrom no", rev);
    }
}