#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num, iter = 0, sumarray[10] = {}, sum, tablesum;
    bool correct = false;
    while (correct == false){
        printf("Enter a number between 0 and 10: ");
        scanf("%d", &num);
        if (num >= 0 && num <= 10){
            correct = true;
        } else {
            printf("Entered an invalid number.\n\n");
        }
    }
    
    while (iter != num + 1){
        sum += iter;
        iter += 1;
    }
    printf("The sum of 0 to %d is %d\n\n", num, sum);
    iter = 0;

    while (iter != 11){
        tablesum = iter * num;
        printf("%d x %d = %d\n", iter, num, tablesum);
        iter += 1;
    }
}


    