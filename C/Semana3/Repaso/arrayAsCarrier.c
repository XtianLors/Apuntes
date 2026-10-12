#include <stdio.h>
#include <stdlib.h>

int main()
{
 
 int i, var, ar_var[6]= {12, 14, 17, 18, 13, 17};
 float ar_var2[6];
 

 
 for (i =0; i < 6; i++)
 {
   ar_var2[i] = (float)ar_var[i]*0.2;
   printf("%lf\n", ar_var2[i]);  
     
 }
 getchar();
 printf("--------------------------------------------"); 
 

 return EXIT_SUCCESS; 
 
}
