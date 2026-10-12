//Ejercicio2

//Cristian López
// UVM

/*
a.	Función para llenar el arreglo
b.	Función para calcular el promedio
c.	La función main, en donde se deben de llamar a las demás funciones de la forma correcta.


*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declarar variables y prototipos
    int arr[];
    int x;
    
    

 getch();

 return 0;   
}


int *filler_array(double arr[], int n){
        
    int k;
    int arr[n];
    
    for(k = 0; k <= n-1; k++){
          printf("Ingresa la calificación: ");
          scanf("", &arr[k]);
          }
    
 
 return arr;
}

double mean(double x[], int n){
    // Declare and initialize varibles.
    int k;
    double sum = 0;
    
    //Determine mean value.
    for(k=0;k<=n-1; k++){
          sum += x[k];
          }
 
 return   sum/n;
}
