#include<stdio.h>

void main(){
    int num, rev = 0;
    printf("\nEnter the to be reversed number: ");
    scanf("%d", &num);

    do{
        rev = rev * 10;
        rev = rev + num % 10;
        num = num / 10;
    }
    while(num != 0);

    printf("The reversed number is: %d", rev);

}