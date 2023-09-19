(/* Write a program that ask the user to input an 
integer and output(print) if it is odd or even*/);

#include <stdio.h>

int main()
{
    int x;
    printf("Input an integer\n");
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("The integer is Even");
    } else {
        printf("The integer is Odd");
    }
}