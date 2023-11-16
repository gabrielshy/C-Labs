#include "functions.h"

int main() {
    struct Func array[4];
    int count = 4;
    populateArray(array);
    acceptDecline(array, count);
}