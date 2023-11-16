#include <stdio.h>

int main()
{
    char firstname;
    char lastname;
    int favnum;
    float deci;
    printf("What is initial of first name?\n");
    scanf(" %c", &firstname);
    printf("What is initial of last name?\n");
    scanf(" %c", &lastname);
    printf("What is your favorite number?\n");
    scanf("%d", &favnum);
    printf("Write a decimal number as x.xx\n");
    scanf("%f", &deci);
    printf("First Initial %c, Last initial %c, Fav. # %d, decimal # %f", firstname, lastname, favnum, deci);
}