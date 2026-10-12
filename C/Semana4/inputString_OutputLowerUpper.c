#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void toUpperCase(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

void remainHere(int choice, char stream[100]){
    
         do{
            switch (choice) {
            case 1:
                toLowerCase(stream);
                printf("String in lower case: %s\n", stream);
                getchar();
                break;
            case 2:
                toUpperCase(stream);
                printf("String in upper case: %s\n", stream);
                getchar();
                break;
            default:
                printf("Invalid choice\n");
                getchar();
                remainHere(choice, stream);
                break;
            }             
     }while(var != EOF);
}

int main() {
    void toLowerCase(char *str);
    void toUpperCase(char *str);
    void remainHere(char var);
    char inputString[100];
    int *pinputString;
    
    int choice;
    printf("Enter a string: ");
    scanf(" %[^\n]", inputString);
    pinputString = &inputString;
    
    printf("Choose an option:\n");
    printf("1. Print in lower case\n");
    printf("2. Print in upper case\n");
    scanf("%d", &choice);

    remainHere(choice, *pinputString);

    getchar();

    return 0;
}
