#include <stdio.h>

int main(){
    printf("Sum of numbers in an array code.\n");
    int n , m, i = 0, j = 0, result, G[n][m];
    printf("Enter rows: ");
    scanf(" %d", &n);
    printf("Enter columns: ");
    scanf(" %d", &m);
    printf("Enter integers in array: \n");
    for(i; i < n; i++){
        for(j; j < m; j++){
            printf("G[%d][%d]: ", i, j);
            scanf("%d", &G[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d + %d\n", result, G[i][j]);
            result += G[i][j];
        }
    }
    printf("Result: %d", result);
}
