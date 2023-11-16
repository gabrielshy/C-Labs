#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char password[50], specialchar[10] = "?_$!";
    int valid = 0, capital = 0, number = 0, special = 0, length = 0, i, j;
    printf("Enter a password with:\n1. Starts with a capital letter\n2. Contains at least one number\n3. Contains one special character (?,_,$, or !)\n4. At least 8 characters long.\n");
    while (valid == 0){
        printf("Enter a password: ");
        scanf("%s", password);
        if (isupper(password[0])){
            capital = 1;
        }
        if (strlen(password) >= 8){
            length = 1;
        }

        for(j = 0; specialchar[j] != '\0'; j++){
            for(i = 0; password[i] != '\0'; i++){
                if (password[i] == specialchar[j]){
                    special = 1;
                    break;
                }
            }
        }
        for (i = 0; password[i] != '\0'; i++){
            if (isdigit(password[i])){
                number = 1;
                break;
            }
        }
        if (capital == 1 && number == 1 && special == 1 && length == 1){
            printf("Password Valid.");
            valid = 1;
        } else {
            printf("Password Invalid\n");
            capital = 0;
            number = 0;
            special = 0;
            length = 0;
        }
    } 
}