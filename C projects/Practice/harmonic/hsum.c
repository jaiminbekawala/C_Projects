#include<stdio.h>
void main(){
    double num, i, sum = 0;
    printf("Enter the value of 'n' : ");
    scanf("%lf", &num);
    printf("Sum = ");
    while (num != 0){   
        for (i = 1; i <= num; i++){
            sum = sum + (1/i);
            if(i == 1){
                printf("1 ");
            }
            else if(i == num ){
                printf("+ (1 / %.2lf) ", i);            
            }
            else{
                printf("+ (1 / %.2lf) ", i);
            }
        }
        printf("\nSum = %.2lf", sum);
        break;
    }
    if(num == 0){
        printf("ERROR!");
        printf("\nFunction Diverges");
    }
}
