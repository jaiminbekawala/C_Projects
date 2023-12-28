#include<stdio.h>

void main()
{
    int marks;
    printf("Enter Your Marks :");
    scanf("%d", &marks);

    if (marks<0 || marks>100)
    {
        printf("Invalid Marks");
    }
    else if(marks>=40){
        printf("\n You are PASS ");
    }
    else
    {
        printf("\nFAIL");
    }
}