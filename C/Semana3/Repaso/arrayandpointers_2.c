#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[5];
  int k, *p;
  
  p = &x[0];
  
  for(k = 0; k<5; k++)
  {
    printf("Number you wish: ");
    scanf("%d", &x[k]);
  }
  
  for(k = 0; k<5; k++)
  {
    printf("%d\n", *(p+k));
    getchar();
  }
  
  printf("Success");
  getchar();
 return EXIT_SUCCESS;
    
}
