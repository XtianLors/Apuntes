#include <stdio.h>
#include <windows.h>

int main() {
    int numCalificaciones;
    printf("¿Cuantas calificaciones desea ingresar? ");
    scanf("%d", &numCalificaciones);

    int calificaciones[numCalificaciones];
    int i, sum = 0;

    for (i = 0; i < numCalificaciones; i++) {
        printf("Ingresa la calificación %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
        sum += calificaciones[i];
    }

    double promedio = (double)sum / numCalificaciones;

    printf("\nEl promedio es: %.2f\n", promedio);
    getchar();
    sleep(1000);
    return 0;
}
