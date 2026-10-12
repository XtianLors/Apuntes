/*
  Name: 
  Copyright: 
  Author: 
  Date: 07/05/24 14:33
  Description: 
*/

/*
Dynamic Memory allocation allows us to allocate memory when a program is 
   executed instead of allocating when the program is compiled.

   Dynamic memory allocation is specified using either the malloc function or 
      the calloc function. 
   
   The argument of malloc function is the number of bytes of memory required, 
      where a byte is a unit of memory that contains 8 bits; the arguments of 
      the calloc function are the number of memory locations needed and the 
      number of bytes for each memory location. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    void *malloc(size_t m);
    void *calloc(size_t n, size_t size);
    int x;
    x = 100;
    unsigned long y;
    y = sizeof(x);
    
    num_pts = 200;
    void *malloc(num_pts*sizeof(int));
    #This is a void pointer because it does not specify the type of variable
          # to be stored in the memory allocation.
    num_pts = 200;
    void *calloc(num_pts, sizeof(int));
    
    #A cast operator should be used with the pointer value returned by
       #the functions in order to coerce it to the proper pointer type.
    int npts = 500;
    double *x;
    
    x = (double *)malloc(npts*sieof(double));
    
    int npts = 500;
    double *x;
    
    x = (double *)calloc(npts, sizeof(double))
    
    printf("The size of integer value is: %lx", y);
   
    Sleep(100);
    getchar();
   
    return EXIT_SUCCESS;    
}
