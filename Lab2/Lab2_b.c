#include <stdio.h>
#include <string.h>

int main()
{
    char username[] = "Admin", password[] = "PASS", userinput[20], passinput[20];
    printf("Enter user name:");
    scanf(" %s", &userinput);
    printf("Enter password:");
    scanf(" %s", &passinput);
    if (strcmp(userinput, username) == 0 && strcmp(passinput, password) == 0){
        printf("Correct Login");
    } else if (strcmp(userinput, username) == 0 && strcmp(passinput, password) != 0){
        printf("Wrong password");
    } else if (strcmp(userinput, username) != 0 && strcmp(passinput, password) == 0){
        printf("Wrong login name");
    } else if (strcmp(userinput, username) != 0 && strcmp(passinput, password) != 0){
        printf("Wrong login name and password");
    }
}