#include<stdio.h>
#include<conio.h>

int main()
{
    float lenght, breath, p, area;
    
    printf("Lenght: ");
    scanf("%f", &lenght);

    printf("Breath: ");
    scanf("%f", &breath);

    area = lenght * breath;

    printf("\n The Area of Rectangle is %.2f", area);

    p = 2 * (lenght + breath);

    printf("\n The Perimeter of the Rectangle is %.2f", p);
    
}