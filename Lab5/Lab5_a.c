#include <stdio.h>
#include <string.h>
#include <ctype.h>

void menu(char string[]){
    char input, output[50];
    int i, letnum = 0, strlength;
    printf("Select an option.\na.Capital all letters\nb.Count letters\nc.Lowercase all letters\nd.Replace string\n");
    scanf(" %c", &input);
    switch (input){
    case 'a':
        for (i = 0; string[i] != '\0'; i++){
            output[i] = toupper(string[i]);
        }
        printf("Modified string is %s", output) ;
        break;
    
    case 'b':
        strlength = strlen(string);
        for (i = 0; string[i] != '\0'; i++){
            if (isalpha(string[i])){
                letnum++;
            }
        } 
        printf("Number of letters is %d", letnum);
        break;

    case 'c':
        for (i = 0; string[i] != '\0'; i++){
            output[i] = tolower(string[i]);
        }
        printf("Modified string is %s", output);
        break;

    case 'd':
        printf("Enter new string: ");
        scanf(" %s", string);
        printf("Replaced old string with: %s", string);
        break;

    default:
        printf("Invalid option");
        break;
    }
}

int main(){
    char string[50];
    printf("Enter a string: ");
    scanf("%s", string);
    menu(string);
}
