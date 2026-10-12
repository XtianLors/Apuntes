/*
  Name: Notes_on_data_types_static_register.c
  Copyright: CC BY 4.0
  Author: CristianD. LopezR.
  Date: 08/08/23 21:54
  Description: Notes on storage class.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int count = 0;
// static int x; //this one is used for 
// register int x; // for fast access.

int main()
{
  int x, y, z;
    
   sleep(10000);
 return EXIT_SUCCESS;   
}

int function calc(int a, int b){
    int x;
    extern int count;
    
}

int function check(int a, int b){
    extern int count;
    
}

/*
The scope of a variable is directly related to the storage class of a variable.
Storage class:Automatic, external, static and register.

Local variables are defined within a function, and this include the formal parameters and any other
 variables declared in the function. A local variable can be accessed onlu in the function that defines it.

Global variables are defined outside the main function or other programmer-defined functions.




*/
