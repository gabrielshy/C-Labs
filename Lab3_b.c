#include <stdio.h>
#include <stdbool.h>

int main(){
    int pin = 6457, inputpin, option, withdrawcount = 0;
    float balance = 5000.00, withdraw, deposit;
    bool correct = false, active = false;
    while (correct == false)
    {
        printf("Enter PIN: ");
        scanf("%d", &inputpin);
        if (inputpin == pin){
            correct = true;
            active = true;
        } else {
            printf("PIN is incorrect.\n\n");
        }
    }
    while (active == true)
    {
        printf("Select an option\n1.Withdraw\n2.Deposit\n3.Quit\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (withdrawcount == 3){
                    printf("Withdraw limit reached.\n\n");
                } else if (withdrawcount <= 3){
                    printf("Withdraw Amount: ");
                    scanf("%f", &withdraw);
                    if (withdraw > balance){
                        printf("Not enough money for withdraw.\n\n");
                    } else if (withdraw < balance){
                        balance -= withdraw;
                        printf("New Balance: %.2f\n\n", balance);
                        withdrawcount += 1;
                    }
                } 
                break;
            case 2:
                printf("Deposit Amount: ");
                scanf("%f", &deposit);
                if (deposit >= 3000.01){
                    printf("Deposit amount too large. Ignoring transaction.\n\n");
                    printf("Balance: %.2f\n\n", balance);
                } else if (deposit <= 3000.00){
                    balance += deposit;
                    printf("New Balance: %.2f\n\n", balance);
                }
                break;
            case 3:
                active = false;
                break;
            default:
                printf("Not valid option\n\n");
                break;
        }
    }
    printf("Quitting program!");
}
