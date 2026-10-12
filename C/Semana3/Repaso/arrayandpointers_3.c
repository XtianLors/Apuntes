#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
    sleep(1000);
  }
  
  sleep(1000);
  printf("Success");
  sleep(1000);
  getchar();
  
 return EXIT_SUCCESS;
    
}
