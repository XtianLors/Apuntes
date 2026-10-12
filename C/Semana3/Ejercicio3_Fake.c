#include <stdio.h>
#include <stdlib.h>

// Function to fill a matrix
void fillMatrix(int matrix[][10], int rows, int cols, char matrixName) {
     int i,j;
    printf("Matriz %c\n", matrixName);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Ingrese el valor de %c%d%d: ", matrixName, i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int matrixA[][10], int matrixB[][10], int matrixC[][10], int rows, int cols) {
     int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols, char matrixName) {
     int i,j;
    printf("\nMatriz %c\n", matrixName);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%c%d%d = %d\n", matrixName, i + 1, j + 1, matrix[i][j]);
        }
    }
}

int main() {
    int rows, cols;
    printf("Ingrese el número de filas: ");
    scanf("%d", &rows);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &cols);

    int matrixA[10][10], matrixB[10][10], matrixC[10][10];

    fillMatrix(matrixA, rows, cols, 'A');
    fillMatrix(matrixB, rows, cols, 'B');

    addMatrices(matrixA, matrixB, matrixC, rows, cols);

    displayMatrix(matrixC, rows, cols, 'C');
    sleep(10000);
    
    return 0;
}
