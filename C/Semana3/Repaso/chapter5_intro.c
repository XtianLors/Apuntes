//Arrays

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int s[6];
    int i;
    //double t[4];
    
    int s[6] = {5, 0, -1, 2, 15, 2};
    double t[4] = {2.3, 3.2, 4.5, 9.03};
    
    for(i=0; i<6; i++)
    {
      printf("%d\n", s[i]);
    }
    getchar();
    
    printf("---------------------------------------\n");
    
    for(i=0; i<4; i++)
    {
      printf("%lf\n", t[i]);
    }
    
    getchar();
    
  return EXIT_SUCCESS;   
}
