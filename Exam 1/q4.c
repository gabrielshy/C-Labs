#include <stdio.h>
#include <string.h>

int main(){
    char fname[20], lname[20], name[40];
    int validF = 0, validAlpha = 0, validL = 0, i, j;
    printf("Enter first name: ");
    scanf("%s", fname);
    while (validF == 0){
        while (validAlpha == 0){
            for (j = 0; fname[j] != '\0'; j++){
                if (fname[j] >= '0' && fname[j] <= '9'){
                    validAlpha = 2;
                    break;
                }
            }
            validAlpha = 1;
        }
        if (!isalpha(fname[0])){
            validF = 1;
            break;
        }
        validAlpha = 3;
    }
    if (validAlpha == 2){
        printf("Only enter letters.");
    } else if (validAlpha == 3){
        printf("Type upper case first letter.");
    }
    validAlpha = 0;
    printf("Enter last name: ");
    scanf("%s", lname);
        while (validL == 0){
        while (validAlpha == 0){
            for (j = 0; lname[j] != '\0'; j++){
                if (lname[j] >= '0' && lname[j] <= '9'){
                    validAlpha = 2;
                    break;
                }
            }
            validAlpha = 1;
        }
        if (!isalpha(lname[0])){
            validL = 1;
            break;
        }
        validAlpha = 3;
    }
        if (validAlpha == 2){
        printf("Only enter letters.");
    } else if (validAlpha == 3){
        printf("Type upper case first letter.");
    }
}