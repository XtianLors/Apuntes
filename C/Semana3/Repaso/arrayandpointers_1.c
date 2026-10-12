#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[5]= {1, 2, 3, 4, 5};
  int k, *p;
  p = &x[0];
  for(k = 0; k<5; k++)
  {
    printf("%d\n", (*(p+k)) * (*(p+k)) );
  }
  
  getchar();
 return EXIT_SUCCESS;
    
}
