#include <stdio.h>
  
int main()
{
    // declaring null pointer
    int* ptr = NULL;
    // ptr = &NULL;
    
    // derefencing only if the pointer have any value
    if (ptr == NULL) {
        printf("Pointer does not point to anything.\n");
        printf("%u\n", NULL);
        printf("%d", NULL);
    }
    else {
        printf("Value pointed by pointer: %d", *ptr);
    }
    getchar();
    return 0;
}
//https://www.geeksforgeeks.org/null-pointer-in-c/
//https://en.wikipedia.org/wiki/Null_pointer
