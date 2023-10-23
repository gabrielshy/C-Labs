#include <stdio.h>

int main(){
    char string[40], reversestr[40];
    int i = 0, j = 0;
    printf("Enter string: ");
    scanf("%s", string);
    while (string[i] != '\0') {
        i++;
    }
    for (i = i - 1; i >= 0; i--){
        reversestr[j] = string[i];
        j++;
    }
    printf("%s", reversestr);
}