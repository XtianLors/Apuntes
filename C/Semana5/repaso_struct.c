#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
// Observe the change from int to "Entero".
typedef int Entero;
    
typedef struct
{            
  float numReal;
  Entero n;        
}Tipo;

int main()
{
    Entero a;
    Tipo b;
    //clrscr();
    a=10;
    b.n = 1;
    b.numReal = 1.10;
    printf(" %d %d %f\n", a, b.n, b.numReal);
    
    getchar();

  return EXIT_SUCCESS;     
}
