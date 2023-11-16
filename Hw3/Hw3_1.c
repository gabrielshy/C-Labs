#include <stdio.h>

int main() {
    int num = 1;

    while (num <= 50) {
        if (num % 3 == 0 || num % 5 == 0) {
            printf("%d", num);
        }
        num++;
    }
}