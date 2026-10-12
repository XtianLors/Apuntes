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
   
   ptr = (long *)malloc(UNIT*sizeof(long));
   while(ptr != NULL)
   {
       free(ptr);
       k++;
       ptr = (long*)malloc(k*UNIT*sizeof(long));         
   }
   printf("maximum contiguous memory available: \n");
   printf("%i integers \n", (k-1)*UNIT);
   
   getchar();
 
   return EXIT_SUCCESS;     
}


