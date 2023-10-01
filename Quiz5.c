#include <stdio.h>

int main(){
    int numbers[10] = {}, i = 0, newnumbers[10];
    printf("Enter 10 numbers.\n");
    for(i = 0; i < 10; i++){
        printf("Enter integer:");
        scanf("%d", &(numbers[i]));
    }   
    for(i = 0; i < 10; i++){
        newnumbers[i] = numbers[i];
        printf("New list: %d", newnumbers[i]);
    }   
}