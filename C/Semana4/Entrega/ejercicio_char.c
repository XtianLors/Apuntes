/*
  Name: actividad7.c
  Copyright: CC BY 4.0
  Author: CristianD. LópezR.
  Date: 13/08/23 20:21
  Description: Construir un programa que admita cadenas y permita al 
  usuario seleccionar si desea ver la cadena en mayúsculas o minúsculas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Cambiar cadena de caracteres a minúscula.
void toLowerCase(char *str) {
     int i;
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Cambiar cadena de caracteres a mayúsculas.
void toUpperCase(char *str) {
     int i;
    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    // Declarar variables y funciones prototipo.
    void toLowerCase(char *str);
    void toUpperCase(char *str);
    char inputString[100];
    int choice;
    
    // Inputs.
    printf("Introduzca la cadena: ");
    scanf(" %[^\n]", inputString);

    printf("Escoja una opción:\n");
    printf("1. Imprimir en minúsculas.\n");
    printf("2. Imprimir en mayúsculas.\n");
    scanf("%d", &choice);

    // Salidas de caracteres.
    switch (choice) {
        case 1:
            toLowerCase(inputString);
            printf("Cadena en minúsculas: %s\n", inputString);
            getchar();
            break;
        case 2:
            toUpperCase(inputString);
            printf("Cadena en mayúsculas: %s\n", inputString);
            getchar();
            break;
        default:
            printf("Opción no válida.\n");
            getchar();
            break;
    }
    // Para visualizar la salida.
    getchar();

    return 0;
}
