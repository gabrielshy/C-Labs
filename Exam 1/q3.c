#include <stdio.h>

int main(){
    int row = 6, col = 10, i, j;
    for (i = 0; i <= row - 1; i++){
        for (j = 0; j < col; j++){
            printf("@");
        }
        printf("\n");
    }
}