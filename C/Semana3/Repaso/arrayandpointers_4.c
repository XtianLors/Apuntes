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
    if(k < 1)
    {
      printf("%d\n", *p);
    }
    else if (k < 5)
    {
      printf("%d\n", *(p+k));
    }
    else
    {
      getchar();
      break;
    }
  }
  
  sleep(1000);
  printf("Success");
  //sleep(1000);
  getchar();
  
 return EXIT_SUCCESS;
    
}
