//

//It allocates memory when the program is executed instead of allocating 
// during compile time.

// This is in though of controlling the memory usage.

// malloc = memory allocation
// calloc = cleared memory

// Both functions reserve a group of contigous memory locations;
// in addition, calloc initializes the memory locations to a binary zero.

// The argument of the malloc function is the number of bytes of memory required
// where a byte is a unit of memory that contains 8 bits; 
// The arguments of the calloc function are the number of memory locations needed
// and the numbers of bytes for each memory location.

//Prototype statements (are contained in the <stdlib.h>)

//void *malloc(size_t m);
//void *calloc(size_t n, size_t size);

// We'll use sizeof();  to determine the size of any data type such as int,
// double, float, long etc.

// sizeof(); admits operations therefore, 
#include <stdio.h>
#include <stdlib.h>

int main(){
    
num_pts = 200;
void *malloc(num_pts*sizeof(int));
 
num_pts = 200;
void *calloc(num_pts, sizeof(int)); 
    
}



