#include <stdio.h>
//#include <unist.h>
#include <windows.h>

int main(){
    //entrada de valores
    int input, rem;
    int calc_module(int a);
    int calc_module_b(int a, int b);
    
    printf("Ingrese el número a evaluar:\t");
    scanf("%d", &input);
    rem = calc_module(input);
    
    if(rem != 0){
           printf("El número %d es impar.\n", input);     
    }else{
           printf("El número %d es par.\n", input);        
    }
    sleep(1000);
 return 0;
}

int calc_module(int a){
    calc_module_b(a, 2);

}

int calc_module_b(int z, int x){
    return z % x;
}
