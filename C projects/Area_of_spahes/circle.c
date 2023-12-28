#include<stdio.h>
#include<math.h>

#define PI (3.1428)

void main()
{
    int rad;
    float area;
    printf("Enter the radius of the cirle: ");
    scanf("%d", &rad);

    area =  PI * pow(rad,2);

    printf("The Area of the cirle is : %lf\n", area);

}