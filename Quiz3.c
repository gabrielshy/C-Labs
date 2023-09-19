#include <stdio.h>

int main()
{
    int input;
    printf("Input an integer: \n");
    scanf(" %d", &input);
    int num = input - 1;
    for(num; num > 0; num--)
    {
        if (input%num == 0){

            printf(" %d", num);
        }
    }
}