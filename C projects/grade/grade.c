#include <stdio.h>

void main()
{
    float m;
    printf("\n Enter your Marks: ");
    scanf("%f", &m);

    if(m<0 || m >100)
        printf("\n Invalid marks");
    else if (m < 40)
        printf("\n Fail");
    else if (m>=40 && m<60)
        printf("\n Second Class\n");
    else if (m>=60 && m<80)
        printf("\n First Class\n");
    else if (m>=80 && m<=100)
        printf("\n Distinction\n");
}