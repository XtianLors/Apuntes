#include <stdio.h>
#include <stdlib.h>
//#include <unist.h>
#include <windows.h>

// Definición de la estructura para el estudiante
struct Estudiante {
    int matricula;
    char nombre[50];
    char carrera[50];
    float promedio;
    char direccion[100];
};

// Función para capturar los datos del estudiante
void capturarDatos(struct Estudiante *estudiante) {
    printf("Ingrese la matrícula: ");
    scanf("%d", &(estudiante->matricula));

    printf("Ingrese el nombre: ");
    scanf(" %[^\n]", estudiante->nombre);

    printf("Ingrese la carrera: ");
    scanf(" %[^\n]", estudiante->carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &(estudiante->promedio));

    printf("Ingrese la dirección: ");
    scanf(" %[^\n]", estudiante->direccion);
}

// Función para mostrar los datos del estudiante
void mostrarDatos(struct Estudiante estudiante) {
    printf("\nDatos del estudiante:\n");
    printf("Matrícula: %d\n", estudiante.matricula);
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Carrera: %s\n", estudiante.carrera);
    printf("Promedio: %.2f\n", estudiante.promedio);
    printf("Dirección: %s\n", estudiante.direccion);
}

int main() {
    struct Estudiante estudiante;

    capturarDatos(&estudiante);
    mostrarDatos(estudiante);

    sleep(10000);
    return 0;
}
