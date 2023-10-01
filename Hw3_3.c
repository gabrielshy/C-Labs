#include <stdio.h>

int main() {
    int numbers[5];
    int i;
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("The final array is: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
}
