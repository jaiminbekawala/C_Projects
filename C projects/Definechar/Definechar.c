#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char ch;

    //To take input from user
    printf("\nEnter a Character:");
    scanf("%c",&ch);

    //To check if character is upper case
    if(isupper(ch))
    printf("\n%c is an upper case character",ch);

    //To check if character is lower
    else if(islower(ch))
    printf("\n%c is a lower case character",ch);

    //To check if character is digit
    else if(isdigit(ch))
    printf("\n%c is a digit case character",ch);

    //if character is a special character
    else
    printf("\n%c is a special character",ch);
    getch();
}