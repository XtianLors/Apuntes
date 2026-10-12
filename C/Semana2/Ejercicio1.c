#include <stdio.h>

int main(void){
        int number_read, determiner;

        printf("Ingrese el número a evaluar: ");
        scanf("%d", &number_read);
        determiner = number_read % 2;

        if(determiner == 0){
                printf("El número %d es par. \n", number_read);
        }else{
                printf("El número %d no es par.\n", number_read);
        }

        return 0;
}
