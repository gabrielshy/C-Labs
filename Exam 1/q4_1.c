#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fname[20], lname[20], name[40];
    int validF = 0, validL = 0, i, j;
    do {
        printf("Enter first name: ");
        scanf("%s", fname);
        validF = 1;
        for (j = 0; fname[j] != '\0'; j++) {
            if (!isalpha(fname[j])) {
                printf("Only enter letters.\n");
                validF = 0;
                break;
            }
        }
        if (validF && !isupper(fname[0])) {
            printf("Type uppercase first letter.\n");
            validF = 0;
        }
    } while (!validF);

    do {
        printf("Enter last name: ");
        scanf("%s", lname);
        validL = 1;
        for (j = 0; lname[j] != '\0'; j++) {
            if (!isalpha(lname[j])) {
                printf("Only enter letters.\n");
                validL = 0;
                break;
            }
        }
        if (validL && !isupper(lname[0])) {
            printf("Type uppercase first letter.\n");
            validL = 0;
        }
    } while (!validL);

    strcpy(name, fname);
    strcat(name, " ");
    strcat(name, lname);
    printf("Name: %s\n", name);
}