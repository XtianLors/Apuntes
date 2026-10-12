

/*
The following program allows you to determine the maximum amount of 
contigous memory that can be dynamically allocated during its execution.

This maximum amount of memory allocated is generally a function of the 
number of users in the system and the number of processes running.
*/

#include <stdio.h>
#include <stdlib.h>
#define UNIT 1000

main()
{
   /**/
   int k = 1, *ptr;
   
   ptr = (int *)malloc(UNIT*sizeof(int));
   while(ptr != NULL)
   {
       free(ptr);
       k++;
       ptr = (int*)malloc(k*UNIT*sizeof(int));         
   }
   printf("maximum contiguous memory available: \n");
   printf("%i integers \n", (k-1)*UNIT);
   
   getchar();
 
   return EXIT_SUCCESS;     
}




