#include "functions.h"
#include <stdio.h>
#include <string.h>

void populateArray(struct Func array[]) {
    struct Func drugsArray[] = {
            {"UN001",  30, "Yes", "No"},
            {"UN2134", 25, "Yes", "Yes"},
            {"UN009",  30, "No",  "No"},
            {"UN3453", 35, "Yes", "Yes"},
    };
    for (int i = 0; i < 4; i++) {
        array[i] = drugsArray[i];
    }
}

void acceptDecline(const struct Func array[], int count) {
    for (int i = 0; i < count; i++){
        if (array[i].dose > 30 && strcmp(array[i].reaction, "Yes") == 0) {
            printf("Drug %s is rejected.\n", array[i].name);
        } else if (strcmp(array[i].reaction, "Yes") == 0 && strcmp(array[i].booster, "Yes") == 0) {
            printf("Drug %s is rejected.\n", array[i].name);
        } else {
            printf("Drug %s is accepted.\n", array[i].name);
        }

    }
}
