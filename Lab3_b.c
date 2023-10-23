#include <stdio.h>
#include <stdbool.h>

int main(){
    int pin = 6457, inputpin;
    bool correct = false;
    while (correct == false)
    {
        printf("Enter PIN: ");
        scanf("%d", inputpin);
        if (inputpin == pin){
            correct = true;
        } else {
            printf("PIN is incorrect.");
        }
    }
    printf("Select an option\n1.Withdraw\n2.Deposit\n3.Quit");
}