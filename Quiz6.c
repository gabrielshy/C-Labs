#include <math.h>

int main(){
    int numbers[10] = {}, i, j, k;
    printf("Enter 10 numbers.\n");
    for(i = 0; i < 10; i++){
        printf("Enter integer: ");
        scanf("%d", &(numbers[i]));
    }
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(numbers[i] > numbers[j]){
                k = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = k;
            }
        }
    }
    printf("Numbers:\n");
    for(i = 0;i < 10; i++){
        printf("%d\t", numbers[i]);
    }
}