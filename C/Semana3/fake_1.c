//Ejercicio2

//Cristian López
// UVM

/*
Ejemplo de entrada
Ingrese el número a evaluar 8
Ejemplo de salida
El número 8 es par

*/

#include <stdio.h>
#include <stdlib.h>

// Function to input elements into the array
void inputElements(int **array, int *size) {
    printf("Enter the size of the array: ");
    scanf("%d", size);

    *array = (int *)malloc(*size * sizeof(int));

    printf("Enter %d elements:\n", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &(*array)[i]);
    }
}

// Function to calculate the average of array elements
double calculateAverage(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}

int main() {
    int *array = NULL;
    int size;
    double average;

    inputElements(&array, &size);
    average = calculateAverage(array, size);

    printf("Average of array elements: %.2f\n", average);

    free(array); // Free dynamically allocated memory

    return 0;
}
