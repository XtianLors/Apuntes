#include <stdio.h>

int main(void){

        int can_art, precio, cantidad, total, counter=1;

        printf("Ingrese la cantidad de artículos: ");
        scanf("%d", &can_art);

        while(counter < can_art){

                printf("Artículo %d cantidad ", counter);
                scanf("%d", &cantidad);
                printf("Artículo %d precio ", counter);
                scanf("%d", &precio);
                counter++;

                total = total + cantidad * precio;
        }
        printf("Total a pagar: %d\n", total);

        return 0;
}