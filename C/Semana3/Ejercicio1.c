//Ejercicio1

//Cristian López
// UVM

/*
Ejemplo de entrada
Ingrese el número a evaluar 8
Ejemplo de salida
El número 8 es par

*/

#include <stdio.h>
//#include <unist.h>
#include <windows.h>

int main(){
    
    //entrada de valores
    int input, rem, modulo=2;
    printf("Ingrese el número a evaluar:\t");
    scanf("%d", &input);
    rem = input%modulo;
    
    if(rem != 0){
           printf("El número %d es impar.\n", input);     
    }else{
           printf("El número %d es par.\n", input);        
    }
    sleep(1000);
 return 0;
}
//References
/*
https://www.geeksforgeeks.org/sleep-function-in-c/
https://stackoverflow.com/questions/10586003/try-catch-statements-in-c
https://www.geeksforgeeks.org/getchar-function-in-c/
https://es.wikihow.com/programar-un-retardo-en-C
*/
