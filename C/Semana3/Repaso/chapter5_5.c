#include <stdio.h>
#include <stdlib.h>
#define N 25
#define FILENAME "grid1.dat"

int main()
{
    /*  Declare variables.  */
    int nrows, ncols, i, j;
    double elevation[N][N];
    FILE *file1;
    
    /*  Declare variables.  */
    file1 = fopen(FILENAME, "r" );
    fscanf(file1, "%i %i", &nrows, &ncols);
    for (i=0; i <= ncols-1; i++)
    {
      for()
      {
      
      
           
      }    
        
    }
 
 return EXIT_SUCCESS;   
}
