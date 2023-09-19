#include <stdio.h>

int main()
{
    char firstname[20];
    char lastname[20];
    int age;
    printf("Enter first name:\n");
    scanf(" %s", &firstname);
    printf("Enter last name:\n");
    scanf(" %s", &lastname);
    printf("Enter age:\n");
    scanf("%d", &age);
    printf("First name:%s Last name:%s Age:%d\n\n\n", firstname, lastname, age);
    strcpy(firstname, "John");
    strcpy(lastname, "Doe");
    age = 99;
    printf("First name:%s Last name:%s Age:%d", firstname, lastname, age);
}