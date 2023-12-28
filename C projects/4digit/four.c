#include<stdio.h>
int main()
{
    int num,mod,temp=0;
    printf("Enter aa four digit number :");
    scanf("%d",&num);
    while(num != 0){

        mod=num%10;
        num=num/10;

        temp =temp+mod;
    }

    printf("Sum of the digit is = %d\n",temp );

}
