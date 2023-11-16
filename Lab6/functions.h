#ifndef LAB6_FUNCTIONS_H
#define LAB6_FUNCTIONS_H

struct Func{
    char name[10];
    int dose;
    char reaction[3];
    char booster[3];
};

void populateArray(struct Func array[]);
void acceptDecline(const struct Func array[], int count);

#endif